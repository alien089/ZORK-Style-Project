#include "Item.h"

Item::Item(const std::string& description, int value)
{
    this->_description = description;
    this->_value = value;
}

//overrido l'operatore di comparazione per controllare l'uguaglianza fra due oggetti
bool Item::operator==(const Item& other) const{return this == &other;}
