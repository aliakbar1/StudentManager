#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using std::string;

class student
{
  private:
    string first;
    string last;
  public:
    void setName(string one, string two);
    string fullName();



};



#endif
