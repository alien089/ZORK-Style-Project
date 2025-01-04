#pragma once
#include "Room.h"

class Map
{
private:
    std::vector<std::vector<Room>> _map;
    Room *_currentRoom;
    
public:
    Map();
    ~Map();
    Room* GetCurrentRoom() const;
    void SetCurrentRoom(std::array<int, 2> coord);
};
