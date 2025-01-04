#include "Map.h"
#include "Room.h"

int main(int argc, char* argv[])
{
    Item* items[] = {
        new Item(),
        new Item(),
        new Item(),
    };

    int positions[2] = { 0 , 0};
    
    Room *pippo = new Room("questa stanza è gialla", items, positions);
    Room pihppo("questa stanza è gialla", items, positions);

    Map* map = new Map();
    
}
