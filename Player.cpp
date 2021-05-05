#include "Player.hpp"
#include "CategoryHelper.hpp"

int Player::lastId = 0;

Player::Player(string name, Date birthdate, string nationality, SportiveCategory category, double salary)
    : Employee(name, birthdate, nationality, salary)
{
    this->id = generateId();
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}


int Player::calcRetire() {
    const int retireYear = 35;
    return (retireYear - this->calcAge()) > 0 ? 
        (retireYear - this->calcAge()) : 0;
}

void Player::printInfo()
{
    cout << "player: " << getName() << " - " 
         << "birthdate: " << getBirthdate().toBrDateString() << " - "
         << "age: " << this->calcAge() << " - "
         << "years to retire: " << this->calcRetire() << " - "
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

int Player::getId()
{
    return this->id;
}

string Player::getCategory()
{
    return this->category;
}

void Player::setCategory(SportiveCategory category)
{
    this->category = CategoryHelper::parseCategoryEnumToString(category);
}