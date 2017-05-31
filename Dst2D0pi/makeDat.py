#script to make a .dat file from a list of root files
#
#Kevin Maguire
#26/01/17
#

#---------------------------------------------------------------

import os, sys

#---------------------------------------------------------------

ff = '/afs/cern.ch/user/k/kmaguire/cmtuser/DaVinciDev_v39r0p1/D0Lifetime/TupleMaking/magup_xrootd_5-99.txt'
treename = 'TeslaRSTuple/DecayTree'
fout = '/afs/cern.ch/user/k/kmaguire/Programs/KenzieAnalysisFork/Dst2D0pi/dat/june17_magup_firstbatch.dat'
itype = '130'
year = '2015'
name = 'Data'
sqrts = '13'

file_out = open(fout, 'wb')
file_in = open(ff, 'rb')
for l in file_in.readlines():
    if '#' in l: continue
    l = l.replace('\n','')
    print l
    file_out.write( 'itype={0} sqrts={1} year={2} name={3} fname={4} tname={5}\n'.format(itype, sqrts, year, name, l, treename) )
