#include "Map.h"

#include <iostream>
#include <ostream>

Map::Map()
{

    
    Inventory* inventory = new Inventory();
    Item item = Item("ddd", 2);
    inventory->AddItem(item);

    Room* room = new Room("this is a desc", inventory, std::array<int, 2>{1, 1});

    inventory = NULL;
    delete inventory;
}

Map::~Map()
{
    delete _currentRoom;
}

Room* Map::GetCurrentRoom() const {return this->_currentRoom;}

void Map::SetCurrentRoom(std::array<int, 2> coord)
{
    this->_currentRoom = _map[coord[0]][coord[1]];
}
