#include <iostream>
#include <queue> //HASH TABLE STL: priority_queue
#include <vector>
#include <string>
#include <unordered_map> //HASH TABLE
#include <algorithm> //make_heap, pop_heap, push_heap, sort_heap
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ncurses.h>
#include <utility>
#include <limits>
#include <set>
#include "astro.h"
#include "planet.h"
#include "splash.h"
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

//Calculates centripetal acceleration for each planet
double centripetal_acceleration(string planet, double velocity) {  //uses constant velocity user input
    double r = 0;  //radius in meters
    double a = 0;  //centripetal acceleration in m/s^2
    if (planet == "Mercury") {
        r = 2449000;
    } else if (planet == "Venus") {
        r = 6052000;
    } else if (planet == "Earth") {
 r = 6.38 * pow(10, 6);
    } else if (planet == "Mars") {
        r = 3397000;
    } else if (planet == "Jupiter") {
        r = 71492000;
    } else if (planet == "Saturn") {
        r = 60268000;
    } else if (planet == "Uranus") {
        r = 25559000;
    } else if (planet == "Neptune") {
        r = 24766000;
    } else if (planet == "Pluto") {
        r = 1150000;
    } else die();
    return  a = pow(velocity, 2) / r;
}

//Calculates current distance from Earth
double total_distance() {
}



int main() {

    //Initialize random number generator
    srand(time(NULL));


    //Set up NCURSES
    initscr();//Start curses mode
    start_color(); //Enable Colors if possible
    init_pair(1,COLOR_WHITE,COLOR_BLACK); //Set up some color pairs
    init_pair(2,COLOR_CYAN,COLOR_BLACK);
    init_pair(3,COLOR_GREEN,COLOR_BLACK);
    init_pair(4,COLOR_YELLOW,COLOR_BLACK);
    init_pair(5,COLOR_RED,COLOR_BLACK);
    init_pair(6,COLOR_MAGENTA,COLOR_BLACK);
    clear();
    noecho();
    cbreak();
    //timeout(TIMEOUT); //Set a max delay for key entry

    splash();
    cin.ignore();
    //Splash Screen
    splash1();
    cin.ignore();
    splash2();
    cin.ignore();
    splash3();
    cin.ignore();
splash4();
    cin.ignore();
    splash5();
    cin.ignore();
    splash6();
    cin.ignore();
    splash7();
    cin.ignore();
    splash8();
    cin.ignore();
    splash9();
    cin.ignore();
    splash10();

    //timeout(TIMEOUT); //Set a max delay for key entry
    clear();


    cout << "WELCOME ABOARD THE YENRECK XLII!" << endl;

    cout << "Press 'Enter' to embark on your Journey to the Beyond simulation." << endl << endl;
    cin.ignore();

    cout << "It is the year 2077. Technology has advanced so that it is possible to travel to all 9 planets in a year." << endl;
    cout << "(Yes, the creators of this simulator still consider Pluto to be a planet.)" << endl;
    cout << "However, there are many variables that must be accounted for in order to complete a successful mission." << endl;
    cout << "This simulator will allow you to test different values for each variable" << endl;
    cout << "until you have discovered a way to successfully complete the mission NASA has assigned for the Yenreck XLII." << endl;
    cout << "The mission is to travel to and photograph as many planets as possible within a span of a year." << endl;
    cout << "Press 'Enter' to Continue" << endl << endl;
    cin.ignore();

    unordered_map <int, Astro> datamap; //HASH TABLE
    vector <string> rankname;

    cout << "STEP ONE::" << endl;
    cout << "You must choose how many astronauts you wish to send on the Yenreck XLII." << endl;
    cout << "Each additional astronaut you send will have a different rank, meaning the odds of a successful flight will increase. " << endl;
    cout << "The ranks (in order of importance and necessity) are as follows: " << endl;
    cout << "Commander, Pilot, Mission Specialist, Flight Engineer, Payload Specialist, Doctor Cosmonaut" << endl;
    cout << "WARNING: The more astronauts you send, the faster supplies will run out." << endl;
    cout << "You may choose to send 2 to 6 astronauts on this mission." << endl;
    cout << endl;
    cout << "Enter your number of astronauts:" << endl;
     try {
        while (cin) {
            int astronum = 0;
            cin >> astronum;
            //Cannot have more than 6 or less than 2 astronauts
            if (!cin || astronum < 2 || astronum > 6) die();
            cout << endl;

            cout << "Enter the name and unique 4-digit ID for each of your astronauts:" << endl;
            cout << "(Enter \"DONE\" for the name once you have added all your astronauts)" << endl;
            // 1:: Name (string)
            string name;
            cin.ignore();
            getline(cin, name);
            if (name == "DONE") break;
            if (!cin) die();
            rankname.push_back(name);

            cout << "This is the size of the map:" << rankname.size() << endl;

            // 2:: Ranking
            string rank;
            if (rankname.size() == 1) {
                rank = "Commander";
                cout << name << "'s rank is a Commander." << endl;
            } else if (rankname.size() == 2) {
                rank = "Pilot";
                cout << name << "'s rank is a Pilot." << endl;
            } else if (rankname.size() == 3) {
                rank = "Mission Specialist";
                cout << name << "'s rank is a Mission Specialist." << endl;
            } else if (rankname.size() == 4) {
                rank = "Flight Engineer";
                cout << name << "'s rank is a Flight Engineer." << endl;
            } else if (rankname.size() == 5) {
                rank = "Payload Specialist";
                cout << name << "'s rank is a Payload Specialist." << endl;
            } else if (rankname.size() == 6) {
                rank = "Doctor Cosmonaut";
                cout << name << "'s rank is a Doctor Cosmonaut." << endl;
            } else if (rankname.size() > 6) {
                cout << "You cannot have more than six astronauts." << endl;
                die();
            }

            // 3:: Astronaut ID
            int ID = 0;
            string s;
            cin.ignore();
            getline(cin, s);
            ID = stoi(s);
            cin >> ID;
//ID cannot be negative
            if (!cin || ID <= 0) die();

            Astro a = {name, rank, ID};

            //Checks to make sure IDs are unique and not already in data structure
            auto keypointer = datamap.find(ID);
            if (keypointer != datamap.end()) die();

            //Stores ID in hash table
            datamap.insert({ID, a});

            //Cannot have more than 6 astronauts
            if (datamap.size() < 2) {
                cout << "You have entered too few astronauts." << endl;
                die();
            } else if (datamap.size() > 6) {
                cout << "You have entered too many astronauts." << endl;
                die();
            }
        }
    }
    catch (...) { die(); }

    cout << endl << endl;
    cout << "STEP TWO::" << endl;
    cout << "Press 'Enter' to Continue" << endl << endl;
    cin.ignore();
    cout << "You must choose what speed you wish to constantly travel at." << endl;
    cout << "WARNING: the faster the speed you travel at, the faster your full tank of fuel will run out." << endl;
    cout << "You may enter a number (in km/hr) anywhere from to 20,000 to 60,000km/hr." << endl;
    cout << endl;
    cout << "Enter the speed the Yenrek 42 will travel at:" << endl;
    double velocity = 0;
    cin >> velocity;
    int badstuffs = 0;
    if (velocity < 20000 || velocity > 60000) {
        cout << "You have entered a velocity outside the required range." << endl;
        die();
    } else if (velocity < 35000) {
        badstuff = 3;
    } else if (velocity > 45000) {
        badstuff = 5;
    } else if (velocity > 20000 || velocity < 60000) {
        badstuff = 0;
    }

    cout << "STEP TWO::" << endl;
    cout << "Press 'Enter' to Continue" << endl;
    cin.ignore();
    cout << "You must choose what order the Yenrick XLII will visit the planets in." << endl;
    cout << "The options are as follows:" << endl;
    cout << "1) Travel to Venus and Mercury, turn back to go all the way out to Pluto, then return to Earth." << endl;
    cout << "2) Travel to Venus and Mercury, turn back to make a pit-stop at Earth, then continue onwards to Pluto before returning to Earth." << endl;
    cout << "3) Travel to Pluto, turn back and travel to Mercury, then return to Earth." << endl;
    cout << "4) Tavel to Pluto, turn back to make a pit-stop at Earth, then continue onwards to Mercury before returning to Earth." << endl;
    cout << endl;
    cout << "Enter the number of the option you wish to choose." << endl;
    int choice = 0;
    cin >> choice;
