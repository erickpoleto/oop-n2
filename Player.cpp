#include "Player.hpp"
#include "CategoryHelper.hpp"

int Player::lastId = 0;

Player::Player(string name, string DN, string nationality, SportiveCategory category, double salary)
    : Employee(name, DN, nationality, salary)
{
    this->id = generateId();
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}

void Player::printInfo()
{
    cout << "player: " << getName() << " - " 
         << "DN: " << getDN() << " - "
         << "nationality: " << getNationality() << " - "
         << "category: " << getCategory() << endl;
}

void Player::printFinancialInfo()
{
    cout << "player: " << getName() << " - "
         << "bruteSalary: " << getBruteSalary() << " - "
         << "netSalary: " << getSalary() << endl;
}

int Player::generateId()
{
    lastId++;
    return lastId;
}

string Player::getCategory()
{
    return this->category;
}

void Player::setCategory(SportiveCategory category)
{
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}