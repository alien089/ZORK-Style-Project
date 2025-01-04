#include "Inventory.h"

Inventory::Inventory() = default;

Inventory::~Inventory() = default;

std::vector<Item> Inventory::GetItems() const
{
    std::vector<Item> items = _items;
    return items;
}

void Inventory::AddItem(const Item &item){_items.push_back(item);}

void Inventory::RemoveItem(const Item &item)
{
    for (int i = 0; i < _items.size(); i++)
    {
        if (this->_items[i] == item)
        {
            _items.erase(_items.begin() + i);
        }
    }
}
