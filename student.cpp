#include "student.h"
#include <string>

using namespace std;

void student::setName(string firstName,string lastName)
{
  first=firstName;
  last=lastName;
}

string student::fullName()
{
  string full;
  full += first;
  
    full += " "; 
  full += last;

  return full;
}
