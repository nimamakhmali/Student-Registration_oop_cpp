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

class Registration
{
  private:
   long studentID;
   unsigned semester;
   unsigned count;
   Course courses[MaxCourses];

  public:
   Registration();
   void input(ifstream & infile);
   void output(ofstream & ofile)const; 
};
 
 void Registration::input(ifstream & infile)
  {
    infile>>studentID>>semester>>count;
      for(unsigned i=0;i<count;i++)
      {courses[i].input(infile);}
  }
 void Registration::output(ofstream & ofile)const
  {
    ofile<<"Student ID: "<<studentID<<"\n"<<"semester:   "<<semester<<endl;
     for(unsigned i=0;i<count;i++)
     {courses[i].output(ofile);}
  }

main()
{  
  ifstream infile("rinput.txt" , ios::app | ios::in);
  if(!infile) 
  {cout<<"OOPS";}
  Registration R;
  R.input(infile);
  ofstream ofile("routput.txt" , ios::app | ios::out);
  if(!ofile) 
  {cout<<"OOPS";}
  R.output(ofile);
  return 0;
}