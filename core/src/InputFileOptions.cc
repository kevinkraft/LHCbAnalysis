#include "InputFileOptions.h"
#include <iostream>

using namespace std;

InputFileOptions::InputFileOptions(){}

InputFileOptions::InputFileOptions( TString _name, int _itype, int _sqrts, TString _year):
  name(_name),
  itype(_itype),
  sqrts(_sqrts),
  year(_year)
{}

InputFileOptions::InputFileOptions( TString _name, int _itype):
  name(_name),
  itype(_itype),
  sqrts(-1),
  year("")
{}

void InputFileOptions::printFileOptions()
{
  cout << "name: " << name << endl;
  cout << "itype: " << itype << endl;
  cout << "sqrts: " << sqrts << endl;
  cout << "year: " << year << endl;
  cout << "filenames.size() : " << filenames.size() << endl;
  for ( unsigned int i = 0; i < filenames.size(); i++)
    {
      cout << filenames[i] << endl;
    }
  cout << "treenames.size() : " << treenames.size() << endl;
  for ( unsigned int j = 0; j < treenames.size(); j++)
    {
      cout << treenames[j] << endl;
    }
}
