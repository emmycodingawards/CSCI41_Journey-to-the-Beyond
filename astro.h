#pragma once
#include <iostream>
using namespace std;

//Astronaut constructor
//Initializes every astronaut

struct Astro {
    protected:
        string name;
        string rank;
        int ID = 0; //Will be unique 4-digit ID - key for unordered map
    public:
        Astro(string new_name, string new_rank, int new_ID = 0) {
            name = new_name;
            rank = new_rank;
            ID = new_ID;
        }

        bool operator< (const Astro &rhs) const {
            return ID > rhs.ID;
        }
};

struct AstroAge : public Astro {
    int age = 0; //Key for heap
    //  AstroAge() : Astro() {  }

    AstroAge (string new_name, string new_rank, int new_ID = 0, int new_age = 0) : Astro(new_name, new_rank, new_ID) {
        name = new_name;
        rank = new_rank;
        ID = new_ID;
        age = new_age;
    }

    bool operator< (const AstroAge &rhs) const {
        return age > rhs.age;
    }
};
