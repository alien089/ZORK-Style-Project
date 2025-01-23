#pragma once
#include <array>
#include <string>
#include <vector>

#include "Inventory.h"
#include "Item.h"

class Room
{
public:
    std::string _description;
    Inventory* _inventory;    
    std::array<int, 2> _position;
    
public:
    Room(const std::string &description, Inventory *inventory, std::array<int, 2> position);
    ~Room();
    std::string GetDescription();
    std::array<int, 2> GetPositions() const;
};
