#pragma once
#include <string>

class Item
{
public:
    std::string _description;
    int _value;
public:
    Item(const std::string& description, int value);
    bool operator ==(const Item &other) const;
};
