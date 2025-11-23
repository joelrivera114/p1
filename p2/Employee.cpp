#include "Employee.h"
#include <iostream>

Employee::Employee():title("noname"), salary(0)
{}
Employee::Employee(std::string t, int s):title(t), salary(s)
{}
std::string Employee::getTitle() const
{
    return title;
}
int Employee::getSalary() const
{
    return salary;
}
void Employee::setTitle(std::string t)
{
    title = t;
}
void Employee::setSalary(int s)
{
    salary = s;
}
void Employee::print() const
{
    std::cout<<"Employee position is "<<title<<std::endl;
    std::cout<<"Employee salary is "<<salary<<std::endl;
}

bool Equivalent(const Employee &o1, const Employee &o2)
{
    return o1.getTitle() == o2.getTitle() && o1.getSalary() == o2.getSalary();
}
bool Compare(const Employee &o1, const Employee &o2, bool comparator)
{
    return comparator && o1.getSalary() <= o2.getSalary();
}
