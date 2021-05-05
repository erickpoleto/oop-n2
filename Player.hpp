#ifndef Player_hpp
#define Player_hpp

#include "Employee.hpp"
#include "SportiveCategory.hpp"
#include "Date.hpp"
#include<iostream>

using namespace std;

class Player : public Employee
{
public:
    Player(string name, Date birthdate, string nationality, SportiveCategory category, double salary);
    
    int getId();
    string getCategory();
    int calcRetire();

    void printInfo();
    void printFinancialInfo();
    void setCategory(SportiveCategory category);

private:
    int id;
    string category;
    
    int static lastId;
    int generateId();
};

#endif