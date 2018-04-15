//if unity doesnt work out I started a backup
#include <iostream>
#include <ncurses.h>
#include <cmath>

class Planet{
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
};

struct World{
    const unsigned char WALL = '*';
    unsigned char* world;
    int SIZE_X = 40;
    int SIZE_Y = 40;
}

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

void print() {
 int c = 0;
    draw(c);
}
