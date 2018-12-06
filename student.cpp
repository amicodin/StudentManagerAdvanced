#include "student.h"

void student::setName( std::string first, std::string last)
{
  primo = first;
  ultimo = last;
}
std::string student::fullName()
{
  primo.append(" ");
  primo.append(ultimo);
  return primo;
}
double student::getScore()
{
  double final = 0;
  int counter = 1;
  for (int i=0; i<total.size(); i++)
  {
    final += total[i];
    counter ++;
  }
  final = final/counter;
  return final;

}
void student::addGrade(double x)
{
  total.push_back(x);
}
