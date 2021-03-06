#include "Employee.hpp"
#include "DateHelper.hpp"

Employee::Employee(string name, Date birthdate, string nationality, float salary)
{
    this->name = name;
    this->birthdate = birthdate;
    this->nationality = nationality;
    this->bruteSalary = salary;
    this->salary = calcNetSalary(salary);
}

int Employee::calcAge() {
    time_t t = time(0);
    struct tm *tm = localtime(&t);
    Date now(tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900);
    return DateHelper::diffBetweenDates(now, this->birthdate);
}

float Employee::calcNetSalary(float salary)
{ 
    float totalDiscount = calcWithholdingTax(salary) + calcInss(salary);
    return salary - totalDiscount;
}

float Employee::calcWithholdingTax(float salary)
{
    float withholdingTax = (salary <= 1100) ? 0 : 
        (this->salary <= 2000) ? 7.5 : 
        (this->salary <= 3100) ? 15 :
        (this->salary <= 4100) ? 22 : 27;

    float withholdingTaxDiscount = withholdingTax / 100 * salary;

    return withholdingTaxDiscount;
}

float Employee::calcInss(float salary)
{
    float inssPercent = (salary <= 1100) ? 7.4 : 
        (this->salary <= 2000) ? 9.0 : 
        (this->salary <= 3100) ? 12 :
        (this->salary > 3100) ? 14 : 0;

    float inssDiscount = inssPercent / 100 * salary;

    return inssDiscount;
}

string Employee::getName()
{
    return this->name;
}

Date Employee::getBirthdate()
{
    return this->birthdate;
}

string Employee::getNationality()
{
    return this->nationality;
}

float Employee::getSalary()
{
    return this->salary;
}

float Employee::getBruteSalary()
{
    return this->bruteSalary;
}

void Employee::setName(string name)
{
    this->name = name;
}


void Employee::setBirthdate(Date birthdate)
{
    this->birthdate = birthdate;
}

void Employee::setNationality(string nationality)
{
    this->nationality = nationality;
}

void Employee::setSalary(float salary)
{
    this->bruteSalary = salary;
    this->salary = calcNetSalary(salary);
}