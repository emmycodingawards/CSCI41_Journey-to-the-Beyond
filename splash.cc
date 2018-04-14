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
        //timeout(TIMEOUT); //Set a max delay for key entry
        clear();

/*      world = new unsigned char[SIZE_X * SIZE_Y];
        reset_world();

        //MAIN LOOP
        int frame = 0;
        cursor_x = SIZE_X/2, cursor_y = SIZE_Y/2; //Cursor for drawing stuff
        game_on = false;
        while (true) {
                if (!game_on)
                        mvprintw(SIZE_X,0,"Design Mode - Game Paused                                        ");
                else
                        mvprintw(SIZE_X,0,"Game Running. Herbs: %i Herbivores: %i Carnivores: %i Frame: %i",herbs.size(), herbivores.size(), carnivores.size(), frame++);
                mvprintw(SIZE_X+1,0,"Use arrow keys to move the cursor around");
                mvprintw(SIZE_X+2,0,"Type Space to clear the square or set a wall");
                mvprintw(SIZE_X+3,0,"Type ~ to place a water");
                mvprintw(SIZE_X+4,0,"Type ! to place an Herb");
                mvprintw(SIZE_X+5,0,"Type H to place an Herbivore");
                mvprintw(SIZE_X+6,0,"Type R to place a Carnivore");
                mvprintw(SIZE_X+7,0,"Type Enter to run or pause the game");
                mvprintw(SIZE_X+8,0,"Type Q to quit");
                int ch = getch(); // Wait for user input, with TIMEOUT delay
                if (ch == 'q' || ch == 'Q') break;
                else if (ch == ' ' || ch == '#') {
                        if (world[index(cursor_x,cursor_y)] == OPEN)
                                world[index(cursor_x,cursor_y)] = WALL;
                        else if (world[index(cursor_x,cursor_y)] == WALL)
                                world[index(cursor_x,cursor_y)] = OPEN;
                        //TODO: Be able to clear other things from the world
                }
                else if (ch == '!' || ch == '1') {
                        if (world[index(cursor_x,cursor_y)] == OPEN) {
                                world[index(cursor_x,cursor_y)] = HERB;
                                herbs.push_back(Herb(cursor_x,cursor_y));
                        }
                }
                else if (ch == 'h' || ch == 'H') {
                        if (world[index(cursor_x,cursor_y)] == OPEN) {
                                world[index(cursor_x,cursor_y)] = HERBIVORE;
                                herbivores.push_back(Herbivore(cursor_x,cursor_y));
                        }
                }
                else if (ch == 'r' || ch == 'R') {
                        if (world[index(cursor_x,cursor_y)] == OPEN) {
                                world[index(cursor_x,cursor_y)] = CARNIVORE;
                                carnivores.push_back(Carnivore(cursor_x,cursor_y));
                        }
                }
                else if (ch == '`' || ch == '~') {
                        if (world[index(cursor_x,cursor_y)] == OPEN) {
                                world[index(cursor_x,cursor_y)] = WATER;
                        }
                }
                //Handle arrow keys, the NCURSES #defs don't work here for some reason
                //KEY_UP, for example, is set to 0403 (259), not 65
                else if (ch == RIGHT) {
                        cursor_y++;
                        if (cursor_y >= SIZE_Y) cursor_y = SIZE_Y - 1; //Clamp value
                }
                else if (ch == LEFT) {
                        cursor_y--;
                        if (cursor_y < 0) cursor_y = 0;
                }
                else if (ch == UP) { //Should be KEY_UP, grr
                        cursor_x--;
                        if (cursor_x < 0) cursor_x = 0;
                }
                else if (ch == DOWN) {
                        cursor_x++;
                        if (cursor_x >= SIZE_X) cursor_x = SIZE_X - 1; //Clamp value
                }
                else if (ch == ERR) { //No keystroke
                        ; //Do nothing
                }
                else if (ch == '\n') {
                        game_on = !game_on; //Pause or unpause the game
                }
                //else
                //mvprintw(SIZE_Y+5,0,"Unknown character: %i\n",ch);

                //Run the AI
                if (game_on) {
                        for (Herb &h : herbs) {
                                h.think();
                        }
                        for (Herbivore &h : herbivores) {
                                h.think();
                        }
                        for (Carnivore &c : carnivores) {
                                c.think();
                        }
                        //Clean up at most one corpse per frame, since the iterator goes invalid after erase
                        //TODO: Fix this so it cleans up all corpses
                        auto iter = herbivores.begin();
                        while (iter != herbivores.end()) {
                                if (iter->dead && iter->hunger <= -100) {
                                        world[index(iter->x,iter->y)] = OPEN;
                                        herbivores.erase(iter);
                                        break;
                                }
                                iter++;
                        }
                        auto iter2 = carnivores.begin();
                        while (iter2 != carnivores.end()) {
                                if (iter2->dead) {
                                        world[index(iter2->x,iter2->y)] = OPEN;
                                        carnivores.erase(iter2);
                                        break;
                                }
                                iter2++;
                        }
                }

                //Redraw the screen
                clear();
                print_world();
                refresh();
//      }
        clear();
        print_world();
        refresh();
        wait_ticks(300000);
        endwin(); // End curses mode
        system("clear");

        return 0;
        */
}
