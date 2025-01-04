#pragma once
#include "Room.h"

class Map
{
private:
    Room *_Map[][];
    Room *_CurrentRoom;
    
public:
    Map();
    Room *GetCurrentRoom() const;
    void SetCurrentRoom(int coord[2]);
};
