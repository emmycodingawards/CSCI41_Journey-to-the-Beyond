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

int pth (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
}

void draw(int r){
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
