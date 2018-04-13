//if unity doesnt work out I started a backup
#include <iostream>
#include <graphics>
#include <stdlib>
#include <conio.h>
#include <math>
#include <dos.h>

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
~Planet() {delete buffer}

Planet(const int, const int, const int, const float);
void show();
void move();
void show_orbit();
void get_nextpos();
};

Planet(const int new_rx,const int new_ry,const int new_radius, const float new_displacement){
    rx=new_rx;
    ry=new_ry;
    x=(319+rx);
    y=240;
    radius=new_radius;
    displacement=new_displacement;
    position=0;
}
Planet ShowOrbit(){
    setcolor(1);
    ellipse(320,240,0,360,rx,ry);
}

