#pragma once
#include <iostream>

//Astronaut constructor
//Initializes every astronaut

struct Astro {
    std::string name;
    std::string rank; //Four positions: Commander, Pilot, Mission Specialist, Flight Engineer
    int ID = 0; //Will be unique 4-digit ID - key for unordered map

    bool operator< (const Astro &rhs) const {
        return ID > rhs.ID;
    }
};
