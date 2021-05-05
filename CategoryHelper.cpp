#include "CategoryHelper.hpp"

string CategoryHelper::parseCategoryEnumToString(SportiveCategory category)
{
    switch (category)
    {
    case SportiveCategory::PROFESSIONAL:
        return "Professional";
    case SportiveCategory::BASE:
        return "Base";
    default:
        return "Base";
    }
}

