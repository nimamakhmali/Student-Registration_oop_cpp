//*************************************************************
//     Nima Makhmali ----->  Buali sina university of IRAN❤️
//*************************************************************
#include <iostream>
#include <fstream>

using namespace std;

const unsigned CnameSize=10;
const unsigned MaxCourses=10;

class Course
{
 private:
  char name[CnameSize+1];
  char section;
  unsigned credits;

  public:
   Course();
   void input(ifstream & infile);
   void output(ofstream & ofile) const;
};
