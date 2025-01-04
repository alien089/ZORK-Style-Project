#pragma once
#include <string>

class Item
{
private:
    std::string _description;
    int _value;
public:
    Item(std::string description, int value);
    bool operator ==(const Item &other) const;
};
