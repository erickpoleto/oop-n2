#ifndef Player_hpp
#define Player_hpp

#include "Employee.hpp"
#include "SportiveCategory.hpp"
#include<iostream>

using namespace std;

class Player : public Employee
{
public:
    Player(string name, string DN, string nationality, SportiveCategory category, double salary);
    
    string getCategory();

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