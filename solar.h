#include <ncurses.h>
#include <ctime>
#include <cmath>
using namespace std;

void wait_ticks(int ticks) {
        clock_t start = clock();
            while ((clock() - start) < ticks)
                        ; //Do nothing
}

void solar() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }    
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}       
