#!/usr/bin/env python

import os

filesperjob=1 #I think this must be 1?

#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/jan17_full.dat')
#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/may17_test.dat')
#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/may17_magup_full.dat')
#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/may17_magdown_full.dat')
#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/june17_magup_firstbatch.dat')
#f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/june17_magup.dat')
f = open('/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/june17_magup_firstbatch.dat')

file_lines = []

for line in f.readlines():
  if not line.startswith('itype'): continue
  file_lines.append(line)

#bq = 'test'
#bq = '8nm'
#bq = '1nh'
bq = '8nh'
#bq = '1nd'
jobsfolder = 'data_jobs_'+bq

jobsreq = len(file_lines)
firstjob = 0
#jobsreq = 1

print jobsreq, ' ', filesperjob, ' ', len(file_lines)

#rerun = [12,17,21,57,63,77,391,567]
#rerun = [125,151,166,250,253,269,27,319,346,397,441,455,459,51,88]
rerun = []

for j in range(firstjob, jobsreq):

  submit = True

  for i in range(j*filesperjob, j*filesperjob + filesperjob ):
    if i > len(file_lines)-1: break
    #if '?svcClass=lhcbUser' in file_lines[i]:
    #if 'cnaf' in file_lines[i]:
      #print 'Job {0} has the extra XROOTD suffix'.format(j)
      #print 'Job {0} is cnaf'.format(j)
    #if i in rerun:
    #  submit = True
    df = open('%s/'%(os.getcwd())+jobsfolder+'/data_j%d.dat'%(j),'w')
    df.write(file_lines[i])
    df.close()

  sfname = '%s/'%(os.getcwd())+jobsfolder+'/data_j%d.sh'%(j)
  sf = open(sfname,'w')
  sf.write('touch %s.done\n'%sfname)
  sf.write('rm -f %s.fail\n'%sfname)
  sf.write('rm -f %s.log\n'%sfname)
  
  sf.write('mkdir -p scratch\n')
  sf.write('cd scratch\n')
  #sf.write('source /afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/scripts/setup_lxplus.sh\n')
  sf.write('LbLogin.sh -c x86_64-slc6-gcc48-opt\n')
  sf.write('SetupProject DaVinci v41r2p1\n')
  #sf.write('lb-run DaVinci/v41r2p1 bash\n')
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

  if submit == True:
    os.system('chmod +x %s'%sfname)
    os.system('bsub -q '+bq+' -o %s.log %s'%(sfname,sfname))
