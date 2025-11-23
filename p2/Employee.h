#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee{
private:
std::string title;
int salary;

public:
Employee();
Employee(std::string t, int s);

std::string getTitle() const;
int getSalary() const;

void setTitle(std::string t);
void setSalary(int s);

void print() const;
};

bool Equivalent(const Employee &o1, const Employee &o2);
bool Compare(const Employee &o1, const Employee &o2, bool comparator);

#endif