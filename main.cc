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

//Calculates escape velocity for each planet
double escape_velocity (string planet) {
const double G = 6.674*pow(10,-11); //universal gravitational constant for every planet
 if (planet == "Mercury") {
  const double mass = 3.30*pow(10,23);
  const double radius = 2449000;
 }
 else if (planet == "Venus") {
  const double radius = 6052000;
  const double mass = 4.87*pow(10,24);
 }
 else if (planet == "Earth") {
  const double radius = 6.38*pow(10,6); //radius in meters
  const double mass = 5.98*pow(10,-11); //mass in kilograms
 }
 else if (planet == "Moon"){
  const double radius = 1738000;
  const double mass = 7.35*pow(10,22);
 }
 else if (planet == "Mars"){
  const double radius = 3397000;
  const double mass = 6.42*pow(10,23);
 }
 else if (planet == "Jupiter"){
 const double radius = 71492000;
 const double mass = 1.90*pow(10,27); 
 }
 else if ( planet == "Saturn"){
  const double radius = 60268000;
  const double mass = 5.68*pow(10,26);
 }
 else if (planet == "Uranus"){
  const double radius = 25559000;
  const double mass = 8.68*pow(10,25);
 }
 else if (planet == "Neptune"){
  const double radius = 24766000;
  const double mass = 1.02*pow(10,26);
 }
 else (planet == "Pluto"){
 const double radius = 1150000;
 const double mass = 1.27*pow(10,22);
 }
 return double v = sqrt(2*G*m/r); //in m/s
}

//Calculates gravitational pull for each planet
double gravitational_pull (string planet) {
 const double G = 6.674*pow(10,-11); //universal gravitational constant for every planet
 const double m_rocket = 2,800,000 //mass of rocket in kilograms
 double r =     //distance from rocket to each planet
 if (planet == "Mercury") { const double m_planet = }
 else if (planet == "Venus") { }
 else if (planet == "Earth") { const double m_planet = }

 return double F = G*m_rocket*m_planet/pow(r,2); //force of gravity in Newtons
}

//Calculates centripetal acceleration for each planet
double centripetal_acceleration (string planet, double velocity) { //uses constant velocity user input
 if (planet == "Mercury") { const double r = }
 else if (planet == "Venus") { }
 else if (planet == "Earth") const double r = 6.38*pow(10,6); //radius in meters

 return double a = pow(v,2)/r; //centripetal acceleration in m/s^2
}

//Calculates current distance from Earth
double total_distance ( ) {
}


int main() {
 cout << "10...... 9....... 8...... 7..... 6..... 5...... 4...... 3...... 2........ 1.........." << endl;
 cout << "Welcome aboard the Yenrick XLII!" << endl;
 cout << "It is the year 2077. Technology has advanced so that it is possible to travel to all 9 planets in a year. << endl;
 cout << "(Yes, the creators of this simulator still consider pluto to be a planet." << endl;
 
 cout << "However, there are many variables that must be accounted for in order to complete a successful mission." << endl;


}

