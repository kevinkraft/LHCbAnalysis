# LHCbAnalysis

The code should be up to date (at least with where we last had it) but we may want to do some PV reassociation (we have now have all the IP etc. with respect to all the PVs).

From the LHCbAnalysis directory you can source the scripts/setup_lxplus.sh file (https://github.com/matthewkenzie/LHCbAnalysis/blob/master/scripts/setup_lxplus.sh)

source scripts/setup_lxplus.sh

Then make sure the file cmake/analyses.cmake has Dst2D0pi uncommented (https://github.com/matthewkenzie/LHCbAnalysis/blob/master/cmake/analyses.cmake )

Then do (from top level LHCbAnalysis directory):

mkdir build
cd build
cmake ..
make -j8 install
cd ../Dst2D0pi

You should then be able to do (make sure you edit dat/analysis_cfg.dat with the relevant files)

bin/Dst2D0pi_Analysis -c dat/data_cfg.dat

This will take forever to run in one go so you can split it into jobs (and run on the batch) with the script:

scripts/split_up_data_jobs.py (https://github.com/matthewkenzie/LHCbAnalysis/blob/master/Dst2D0pi/scripts/split_up_data_jobs.py)

You may want to comment line 51 of this script before running it otherwise it will submit a load of jobs (https://github.com/matthewkenzie/LHCbAnalysis/blob/master/Dst2D0pi/scripts/split_up_data_jobs.py#L51 )