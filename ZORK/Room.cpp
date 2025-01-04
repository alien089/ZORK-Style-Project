#include "Room.h"

Room::Room(const std::string &description, std::vector<Item>  &items, std::array<int, 2> position)
{
    this->_description = description;
    this->_items = items;
    this->_position = position;
}

Room::~Room() = default;

std::string Room::GetDescription(){return this->_description;}

//ritorno il riferimento dell'oggetto richiesto da indice
Item* Room::GetItem(int index){return &_items[index];}

std::array<int, 2> Room::GetPositions() const {return this->_position;}

//aggiungo alla stanza un nuovo oggetto
void Room::AddItem(Item& item){_items.push_back(item);}

//cerco nell'inventario della stanza l'oggetto richiesto originale e lo elimino
void Room::RemoveItem(Item& item)
{
    for (int i = 0; i < _items.size(); i++)
    {
        if (this->_items[i] == item)
        {
            _items.erase(_items.begin() + i);
        }
    }
}

