#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <ncurses.h>
#include <utility>
#include <limits>
#include <vector>
#include <queue>
#include <set>
#include "splash.h"
using namespace std;

 
int main()
{
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

 
}
