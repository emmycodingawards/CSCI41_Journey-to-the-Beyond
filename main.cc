#include <iostream>
#include <queue> //HASH TABLE STL: priority_queue
#include <vector>
#include <string>
#include <unordered_map> //HASH TABLE
#include <algorithm> //make_heap, pop_heap, push_heap, sort_heap
#include <cmath>
#include <cstdlib>
#include <cctype>
#include "astro.h" 
#include "planet.h"
using namespace std;

void die() {
    cout << "Invalid Input!\n";
    exit(1);
}

//Calculates escape velocity for each planet
double escape_velocity(string planet) {
    double v = 0;                           //escape velocity in m/s
    double mass = 0;                        //mass in kilograms
    double radius = 0;                      //radius in meters
    const double G = 6.674 * pow(10, -11); //universal gravitational constant for every planet
    if (planet == "Mercury") {
        mass = 3.30 * pow(10, 23);
        radius = 2449000;
    } else if (planet == "Venus") {
        radius = 6052000;
        mass = 4.87 * pow(10, 24);
    } else if (planet == "Earth") {
        radius = 6.38 * pow(10, 6);
        mass = 5.98 * pow(10, -11);
    } else if (planet == "Moon") {
        radius = 1738000;
        mass = 7.35 * pow(10, 22);
    } else if (planet == "Mars") {
        radius = 3397000;
        mass = 6.42 * pow(10, 23);
    } else if (planet == "Jupiter") {
        radius = 71492000;
        mass = 1.90 * pow(10, 27);
    } else if (planet == "Saturn") {
         radius = 60268000;
         mass = 5.68 * pow(10, 26);
    } else if (planet == "Uranus") {
         radius = 25559000;
         mass = 8.68 * pow(10, 25);
    } else if (planet == "Neptune") {
         radius = 24766000;
         mass = 1.02 * pow(10, 26);
    } else if (planet == "Pluto") {
         radius = 1150000;
         mass = 1.27 * pow(10, 22);
    } else die();
    return v = sqrt(2 * G * mass / radius);
}

  //Calculates gravitational pull for each planet
double gravitational_pull(string planet) {
    double F = 0;                           //force of gravity in Newtons
    double m_planet = 0;                    //mass of planet in kg
    const double G = 6.674 * pow(10, -11); //universal gravitational constant for every planet
    const double m_rocket = 2800000;      //mass of rocket in kilograms
    const double r = 36 * pow(10, 6);     //distance from rocket to each planet - it's going to be constant for us
    if (planet == "Mercury") {
        m_planet = 3.30 * pow(10, 23);
    } else if (planet == "Venus"){
        m_planet = 4.87 * pow(10, 24);
    } else if (planet == "Earth") {
         m_planet = 5.98 * pow(10, -11);
    } else if (planet == "Mars") {
         m_planet = 6.42 * pow(10, 23);
    } else if (planet == "Jupiter") {
         m_planet = 1.90 * pow(10, 27);
    } else if (planet == "Saturn") {
         m_planet = 5.68 * pow(10, 26);
    } else if (planet == "Uranus") {
         m_planet = 8.68 * pow(10, 25);
    } else if (planet == "Neptune") {
         m_planet = 1.02 * pow(10, 26);
    } else if (planet == "Pluto") {
         m_planet = 1.27 * pow(10, 22);
    } else die();
    return  F = G * m_rocket * m_planet / pow(r, 2);
}

 
