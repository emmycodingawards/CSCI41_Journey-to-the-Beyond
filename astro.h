#pragma once
#include <iostream>
using namespace std;

//Astronaut constructor
//Initializes every astronaut
//Can only be 4 astronauts in rocket at a time

struct Astro {
  string name;
  string position; //Four positions: Commander, Pilot, Mission Specialist, Flight Engineer
  int ID = 0; //Will be unique 4-digit ID - key for unordered map
  int health = 100; //When health reaches 0, astronaut dies
  int days_on_rocket = 0; //in months, max 183 days (6 months) and astronaut has to return to Earth
 
  bool operator< (const Astro &rhs) const {
        return ID > rhs.ID;
  }
};
