#include "Room.h"


Room::Room(const std::string& description, Inventory *inventory, std::array<int, 2> position)
{
    this->_description = description;
    this->_inventory = inventory;
    this->_position = position;
}

Room::~Room() = default;

std::string Room::GetDescription(){return this->_description;}

std::array<int, 2> Room::GetPositions() const {return this->_position;}
