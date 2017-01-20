#!/usr/bin/env python

import os

#filesperjob=50
filesperjob=3

#f = open('dat/data_cfg.dat')
f = open('/afs/cern.ch/user/k/kmaguire/Programs/MattKenzieAnalysis/Dst2D0pi/dat/analysis_cfg.dat')

file_lines = []

for line in f.readlines():
  if not line.startswith('itype'): continue
  file_lines.append(line)

#bq = 'test'
#bq = '8nm'
#bq = '1nh'
#bq = '8nh'
#bq = '1nd'
jobsfolder = 'data_jobs_'+bq

jobsreq = len(file_lines)/filesperjob + 1
#jobsreq = 1

for j in range(jobsreq):

  df = open('%s/'%(os.getcwd())+jobsfolder+'/data_j%d.dat'%(j),'w')
  for i in range(j*filesperjob, j*filesperjob + filesperjob ):
    if i > len(file_lines)-1: break

    df.write(file_lines[i])

  df.close()
 
  sfname = '%s/'%(os.getcwd())+jobsfolder+'/data_j%d.sh'%(j)
  sf = open(sfname,'w')
  sf.write('touch %s.done\n'%sfname)
  sf.write('rm -f %s.fail\n'%sfname)
  sf.write('rm -f %s.log\n'%sfname)
  
  sf.write('mkdir -p scratch\n')
  sf.write('cd scratch\n')
  sf.write('. LbLogin.sh\n')
  sf.write('. SetupProject DaVinci v41r3\n')
  sf.write('cp %s/bin/Dst2D0pi_Analysis .\n'%os.getcwd())
  sf.write('cp %s .\n'%df.name)
  sf.write('if ( ./Dst2D0pi_Analysis -c %s -o data_j%d.root -b ) then\n'%(os.path.basename(df.name),j))
  #sf.write('\tcp data_j%d.root %s/data_jobs/\n'%(j,os.getcwd()))
  sf.write('\t/afs/cern.ch/project/eos/installation/0.3.84-aquamarine/bin/eos.select cp data_j%d.root /eos/lhcb/user/k/kmaguire/D0Lifetime_2015/MattSkim/data_j%d.root\n'%(j,j))
  sf.write('\ttouch %s.done\n'%sfname)
  sf.write('else\n')
  sf.write('\ttouch %s.fail\n'%sfname)
  sf.write('fi\n')
  sf.write('rm -f %s.run\n'%sfname)
  sf.close()

  os.system('chmod +x %s'%sfname)
  os.system('bsub -q '+bq+' -o %s.log %s'%(sfname,sfname))
