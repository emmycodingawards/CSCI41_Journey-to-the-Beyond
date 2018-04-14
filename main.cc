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
 return double v = sqrt(2*G*mass/radius); //in m/s
}

//Calculates gravitational pull for each planet
double gravitational_pull (string planet) {
 const double G = 6.674*pow(10,-11); //universal gravitational constant for every planet
 const double m_rocket = 2,800,000 //mass of rocket in kilograms
 double r =     //distance from rocket to each planet
 if (planet == "Mercury") { const double m_planet = 3.30*pow(10,23); }
 else if (planet == "Venus") { const double m_planet = 4.87*pow(10,24);}
 else if (planet == "Earth") { const double m_planet = 5.98*pow(10,-11); }
 else if ( planet == "Mars") { const double m_planet = 6.42*pow(10,23); }
 else if ( planet == "Jupiter") { const double m_planet = 1.90*pow(10,27);}
 else if ( planet == "Saturn") { const double m_planet = 5.68*pow(10,26); }
 else if (planet == "Uranus") { const double m_planet = 8.68*pow(10,25);}
 else if (planet == "Neptune") {const double m_planet = 1.02*pow(10,26);}
else  ( planet == "Pluto") { const double m_planet = 1.27*pow(10,22);}
 return double F = G*m_rocket*m_planet/pow(r,2); //force of gravity in Newtons
}

//Calculates centripetal acceleration for each planet
double centripetal_acceleration (string planet,double velocity) { //uses constant velocity user input
// Hey emmy why are you passing in the escape velocity? you should just have it as a constant.
 if (planet == "Mercury") { const double r = 2449000; }
 else if (planet == "Venus") { const double r = 6052000;}
 else if (planet == "Earth") const double r = 6.38*pow(10,6); //radius in meters
 else if ( planet == "Mars") { const double r = 3397000 ;}
 else if ( planet == "Jupiter") { const double r = 71492000;}
 else if ( planet == "Saturn") { const double r = 60268000 ;}
 else if ( planet == "Uranus") { const double r = 25559000;}
 else if ( planet == "Neptune") { const double r = 24766000;}
 else (planet == "Pluto"){ const double r = 1150000; }
 return double a = pow(v,2)/r; //centripetal acceleration in m/s^2
 }

//Calculates current distance from Earth
double total_distance ( ) {
}


int main() {
 cout << "10...... 9....... 8...... 7..... 6..... 5...... 4...... 3...... 2........ 1.........." << endl;
 cout << "Welcome aboard the Yenrek XLII!" << endl;
 cout << "It is the year 2077. Technology has advanced so that it is possible to travel to all 9 planets in a year. << end1;
 cout << "(Yes, the creators of this simulator still consider pluto to be a planet.)" << endl;
 
 cout << "However, there are many variables that must be accounted for in order to complete a successful mission." << endl;
 cout << "Warnings: The more astronauts you take board, the faster supplies will run out." <<endl;
 cout << "The faster the speed you travel at, the faster your fuel will run out." << endl;
 cout << "Think wisely about your input values!" << endl;
}

