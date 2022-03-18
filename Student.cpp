#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int stdId , char sname[]) {
  studentId = stdId;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id : "<<studentId<<endl;
  cout<<"Name : "<<name<<endl;
}
