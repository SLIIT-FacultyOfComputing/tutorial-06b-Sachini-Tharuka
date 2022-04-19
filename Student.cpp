#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id,const char sname[]) {
  studentId=id;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"ID= "<<studentId<<endl;
  cout<<"Name="<<name<<endl;
  
}
