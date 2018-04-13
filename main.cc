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
 }
 if (planet == "Venus") {
 }
 if (planet == "Earth") {
  const double r = 6.38*pow(10,6); //radius in meters
  const double M = 5.98*pow(10,-11); //mass in kilograms
 }
 return double v = sqrt(2*G*M/r); //in m/s
}

//Calculates gravitational pull for each planet
double gravitational_pull(string planet){
 const double G = 6.674*pow(10,-11); //universal gravitational constant for every planet
 const double m_rocket = 2,800,000 //mass of rocket in kilograms
 double r =     //distance from rocket to each planet
 if (planet == "Earth") {
  const double m_planet = 
 }
 return double F = G*m_rocket*m_planet/pow(r,2); //force of gravity in Newtons
}

//acceleration v1= previous escape_velocity v2=current escape velocity
double acceleration_formula ( double v1, double v2, int t) {

}
// supposibly emmy and preet are going to do a distance vector

int main() {
 cout << "5,4,3,2,1" << " " << " Welcome to Yenrek" << endl;
 cout << "It is the year 2077. Technology has advanced so that it is possible to travel to all 9 planets ( YES PLUTO IS A PLANET) in a year given tyou chose the right variables." << endl;
 cout << " Please input amount of water:" << endl; 
 cin >>  "


}

