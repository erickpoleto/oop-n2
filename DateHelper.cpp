#include "DateHelper.hpp"

int DateHelper::diffBetweenDates(Date date1, Date date2)
{
    int total1 = date1.year * 365 + date1.month * 30 + date1.day;
    int total2 = date2.year * 365 + date2.month * 30 + date2.day;
    return (total1 - total2) / 365;
}

