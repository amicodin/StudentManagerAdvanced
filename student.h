#ifndef _STUDENT_H_
#define _STUDENT_H_ 
#include <string>
#include <vector>
class student
{
  private:
          std::string primo = "";
          std::string ultimo = "";
          std::vector <double> total;
  public:
  double getScore();
  void addGrade(double x);
  void setName(std::string first, std::string last);
  std::string fullName();
};











#endif
