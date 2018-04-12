#pragma once
#include <iostream>
using namespace std;

//Planet constructor
//Stores planet information

struct Planet {
  string name;
  string position;
  float distance_from_Earth = 0;
 
  bool operator< (const Planet &rhs) const {
        return position > rhs.position;
  }
};
