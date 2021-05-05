#ifndef Employee_hpp
#define Employee_hpp

#include<iostream>
#include "Date.hpp"
using namespace std;


class Employee
{
public:
    Employee(string name, Date birthdate, string nationality, float salary);
    
    int calcAge();
    float calcRetire();

    string getName();
    Date getBirthdate();
    string getNationality();
    float getSalary();
    float getBruteSalary();
    
    void setName(string name);
    void setBirthdate(Date birthdate);
    void setNationality(string nationality);
    void setSalary(float salary);

    float calcInss(float salary);
    float calcWithholdingTax(float salary);

private:
    string name;
    Date birthdate;
    string nationality;
    float salary;
    float bruteSalary;
    float inssPercent;
    float withholdingTax;

    float calcNetSalary(float salary);
};

#endif