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
using namespace std;
// DONE BY DENISE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 
//CALCULATE ESCAPE SPEED
double escape_velocity ( ) {
 const double G = 6.673*pow(10,-11);
 const double r = 6.38*pow(10,6);
 const double Mearth = 5.98*pow(10,-11);
 double escapevelocity = 2*G*Mearth/r;
 escapevelocity= sqrt(escapevelocity);
 return escapevelocity;
}
//Mass1=is the mass of the planet Mass2=rocketmass rad=radius distance between the planet and rocket
//General Function that calculates each gravational poll of each planet..
double gravitational_pull( double Mass1, double Mass2, double rad){
 const double G= 6.672*pow(10,-11);
 gravitational_force = G*Mass1*Mass2/pow(rad,2);
 return gravitational_force;
}
//acceleration

int main() {


}

