#pragma once
#include <vector>

#include "Item.h"

class Inventory
{
private:
    std::vector<Item> _items;
public:
    Inventory();
    ~Inventory();
    std::vector<Item> GetItems() const;
    void AddItem(const Item &item);
    void RemoveItem(const Item &item);
    Item* GetItem(int index);
};
