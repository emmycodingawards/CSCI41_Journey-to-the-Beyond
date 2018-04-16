#pragma once
#include <iostream>

//Planet constructor
//Stores planet information
//MIN Heap

struct Planet {
    std::string name;
    std::string position;
    float distance_from_Earth = 0;
    float distance_from_rocket = 0;

    bool operator< (const Planet &rhs) const {
        return position < rhs.position;
    }
};
