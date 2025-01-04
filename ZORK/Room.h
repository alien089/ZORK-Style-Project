#pragma once
#include <array>
#include <string>
#include <vector>

#include "Item.h"

class Room
{
private:
    std::string _description;
    std::vector<Item> _items;     
    std::array<int, 2> _position;
    
public:
    Room(const std::string &description, std::vector<Item> &items, std::array<int, 2> position);
    ~Room();
    std::string GetDescription();
    Item* GetItem(int index);
    std::array<int, 2> GetPositions();
    void AddItem(Item &item);
    void RemoveItem(Item &item);
};
