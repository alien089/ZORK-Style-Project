#include "Map.h"

Map::Map()
{
    
}

Map::~Map()
{
    delete _currentRoom;
}

Room* Map::GetCurrentRoom() const {return this->_currentRoom;}

void Map::SetCurrentRoom(std::array<int, 2> coord)
{
    this->_currentRoom = &_map[coord[0]][coord[1]];
}
