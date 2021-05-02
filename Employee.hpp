#ifndef Employee_hpp
#define Employee_hpp

#include<iostream>
using namespace std;

class Employee
{
public:
    Employee(string name, string DN, string nationality, float salary);
    
    float calcAge();
    float calcRetire();

    string getName();
    string getDN();
    string getNationality();
    float getSalary();
    float getBruteSalary();
    
    void setName(string name);
    void setDN(string dn);
    void setNationality(string nationality);
    void setSalary(float salary);

    float calcInss(float salary);
    float calcWithholdingTax(float salary);

private:
    string name;
    string DN;
    string nationality;
    float salary;
    float bruteSalary;
    float inssPercent;
    float withholdingTax;

    float calcNetSalary(float salary);
};

#endif