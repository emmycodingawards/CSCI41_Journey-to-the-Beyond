#include <ncurses.h>
#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <utility>
#include <limits>
#include <vector>
#include <queue>
#include <set>
using namespace std;
bool rocket;//moving into orbit when running
int cursor_x, cursor_y; // to draw stuff
int SIZE_X = 40;//dim of world
int SIZE_Y = 40;
const unsigned int TIMEOUT = 300;
const unsigned char WALL = '*';//star walls of "world"
unsigned char* world;// array holding world

int index(int i, int j) {
    int c = 0;
    while (i < 0) i+=SIZE_X;
    while (j < 0) j+=SIZE_Y;
    if (i >= SIZE_X) i %= SIZE_X;
    if (j >= SIZE_Y) j %= SIZE_Y;
    return (i*SIZE_Y+j);
}

void reset_world() {
    for (int i = 0; i < SIZE_X; i++) {
        for (int j = 0; j < SIZE_Y; j++) {
            if (i == 0 || j == 0 || i == SIZE_X - 1 || j == SIZE_Y - 1) //Is edge
                world[index(i,j)] = WALL;
        }
    }
}
void print_world() {
    for (int i = 0; i < SIZE_X; i++) {
        for (int j = 0; j < SIZE_Y; j++) {
            if (i == cursor_x && j == cursor_y)
                attron(A_UNDERLINE | A_BOLD);
            int color = 1;
            attroff(A_UNDERLINE | A_BOLD);//error??
        }
    }
}

int pth (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
}

void draw(int r){//drawing circles
    const int width = r;
    const int length = r * 1.5;

    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {

            if ((int) pth(x,y)==r) cout << ".";
            else cout << " ";

        }
        cout << "\n";
    }
    //cin.get();
}

int main (){
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
    timeout(TIMEOUT); //Set a max delay for key entry

     solar();
         timeout(TIMEOUT); //Set a max delay for key entry
             clear();


    world = new unsigned char[SIZE_X * SIZE_Y];
    reset_world();
    
        int frame = 0;
    cursor_x = SIZE_X/2, cursor_y = SIZE_Y/2; //Cursor for drawing stuff
    rocket = false;
    while (true) {
        if (!rocket)
            mvprintw(SIZE_X,0,"Simulation Paused                                        ");
        else

            mvprintw(SIZE_X+7,0,"Type Enter to run or pause the simulation");
    }


        for (int i = 10; i <= 10 ; i++){
            draw(i);
        }
        print_world();
    }
                                                                  74,1-4        Bot
