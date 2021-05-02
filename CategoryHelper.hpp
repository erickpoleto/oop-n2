#ifndef CategoryHelper_hpp
#define CategoryHelper_hpp

#include "SportiveCategory.hpp"
#include<iostream>
using namespace std;

class CategoryHelper
{
public:
    static string parseCategoryEnumToString(SportiveCategory category);
};

#endif