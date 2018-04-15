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
bool rocket;//moving into orbit
int cursor_x, cursor_y;
int SIZE_X = 20;//dim of world
int SIZE_Y = 20;
const unsigned char WALL = '*';
unsigned char* world;
/*class Planet{
int x;
int y;
int rx;
int ry;
int color;
int radius;
int pos;
float displacement;
char* buffer;

    public:
Planet(){}
~Planet() {delete buffer;}

Planet(const int, const int, const int, const float);
void show();
void move();
void show_orbit();
void get_nextpos();
};*/

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
            attroff(A_UNDERLINE | A_BOLD);
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


        for (int i = 10; i <= 10 ; i++){
            draw(i);
        }
        print_world();
    }
                                                                  74,1-4        Bot
