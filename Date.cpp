#include "Date.hpp"

Date::Date() {

}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

string Date::toBrDateString()
{
    string strDay = to_string(this->day);
    string strMonth = to_string(this->month);
    string strYear = to_string(this->year);
    return strDay + "/" + strMonth + "/" + strYear;
}

