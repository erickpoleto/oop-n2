#ifndef Date_hpp
#define Date_hpp

#include<iostream>
using namespace std;

class Date
{
public:
    Date();
    Date(int day, int month, int year);
    
    int day;
    int month;
    int year;
    string toBrDateString();
};

#endif