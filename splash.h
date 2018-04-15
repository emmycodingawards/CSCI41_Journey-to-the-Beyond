#include <ncurses.h>
#include <ctime>
#include <cmath>
using namespace std;

void wait_ticks(int ticks) {
        clock_t start = clock();
        while ((clock() - start) < ticks)
                ; //Do nothing
}

void words(int frame) {
        int x = 60-frame, y = 0, line = 0;

        mvprintw(y+line++,x,"           __   __  _____    _   _   ____    _____   _  __           _  _     ____     ");
        mvprintw(y+line++,x,"           \\ \\ / / | ____|  | \\ | | |  _ \\  | ____| | |/ /          | || |   |___ \\    ");
        mvprintw(y+line++,x,"            \\ V /  |  _|    |  \\| | | |_) | |  _|   | ' /    _____  | || |_    __) |   ");
        mvprintw(y+line++,x,"             | |   | |___   | |\\  | |  _ <  | |___  | . \\   |_____| |__   _|  / __/   ");
        mvprintw(y+line++,x,"             |_|   |_____|  |_| \\_| |_| \\_\\ |_____| |_|\\_\\             |_|   |_____| ");
        mvprintw(y+line++,x,"(c) 2018 PREET JYOTPREET");
        mvprintw(y+line++,x,"(c) 2018 EMMY ISSA");
        mvprintw(y+line++,x,"(c) 2018 CHRISTIANA HUISKENS");
        mvprintw(y+line++,x,"(c) 2018 DENISE GAONA");
        mvprintw(y+line++,x," ");
        mvprintw(y+line++,x," ");

        mvprintw(y+line++,x," Please 'ENTER' to continue... ");

}

void splash() {
        int x = 0, y = 0; //Holds offsets to draw the ASCII art
        for (int i = 0; i < 60; i++) {
                timeout(10);
                int ch = getch(); //Allow them to hit a key to skip the splash screen
                if (ch != ERR) return;

                //Redraw splash screen
                clear();
                words(i);
                refresh();

                wait_ticks(0.05 * CLOCKS_PER_SEC);
        }
        wait_ticks(0.75 * CLOCKS_PER_SEC);
        clear();
}





/* void words1(int frame) {
   int x = 60-frame, y = 0, line = 0;

   mvprintw(y+line++,x,"   _    ___        ___        ___      _____        __        ____      _  _     _____      ____        _      ");
   mvprintw(y+line++,x,"  / |  / _ \\      / _ \\      ( _ )    |___  |      / /_      | ___|    | || |   |___ /     |___ \\      / |         ");
   mvprintw(y+line++,x,"  | | | | | |    | (_) |     / _ \\        / /     | '_ \\     |___ \\    | || |_     |_ \\       _) |     | |       ");
   mvprintw(y+line++,x,"  | | | |_| |     \\__, |    | (_) |      / /      | (_) |     ___) |   |__   _|   ___) |    / __/      | |        ");
   mvprintw(y+line++,x,"  |_|  \\___/        /_/      \\___/      /_/        \\___/     |____/       |_|    |____/    |_____|     |_|        ");


   }
   */


void words1(int frame) {
        int x =60-frame, y =0, line =0;

        mvprintw(y+line++,x,"   _    ___          ");
        mvprintw(y+line++,x,"  / |  / _ \\        ");
        mvprintw(y+line++,x,"  | | | | | |         ");
        mvprintw(y+line++,x,"  | | | |_| |   _   _   _   _   _   _   _   _   _       ");
        mvprintw(y+line++,x,"  |_|  \\___/   (_) (_) (_) (_) (_) (_) (_) (_) (_)       ");
        mvprintw(y+line++,x," ");
        mvprintw(y+line++,x," ");

        mvprintw(y+line++,x," Please 'ENTER' to continue... ");

}



void splash1() {
        int x = 0, y = 0; //Holds offsets to draw the ASCII art
        for (int i = 0; i < 60; i++) {
                timeout(10);
                int ch = getch(); //Allow them to hit a key to skip the splash screen
                if (ch != ERR) return;

                //Redraw splash screen
                clear();
                words1(i);
                refresh();

                wait_ticks(0.05 * CLOCKS_PER_SEC);
        }
        wait_ticks(0.75 * CLOCKS_PER_SEC);
        clear();
}

void words2(int frame) {
        int x = 60-frame, y = 0, line = 0;

        mvprintw(y+line++,x,"        __     ");
        mvprintw(y+line++,x,"       / _ \\      ");
        mvprintw(y+line++,x,"      | (_) |      ");
        mvprintw(y+line++,x,"       \\__, |    _   _   _   _   _   _   _   _   _        ");
        mvprintw(y+line++,x,"         /_/    (_) (_) (_) (_) (_) (_) (_) (_) (_)      ");
        mvprintw(y+line++,x," ");
        mvprintw(y+line++,x," ");

        mvprintw(y+line++,x," Please 'ENTER' to continue... ");

}
void splash2() {
        int x = 0, y = 0; //Holds offsets to draw the ASCII art
        for (int i = 0; i < 60; i++) {
                timeout(10);
                int ch = getch(); //Allow them to hit a key to skip the splash screen
                if (ch != ERR) return;

                //Redraw splash screen
                // clear();
                words2(i);
                refresh();

                wait_ticks(0.05 * CLOCKS_PER_SEC);
        }
        wait_ticks(0.75 * CLOCKS_PER_SEC);
        clear();
}
void words3(int frame) {
        int x = 60-frame, y = 0, line = 0;
        mvprintw(y+line++,x,"        ___     ");
        mvprintw(y+line++,x,"       ( _ )     ");
        mvprintw(y+line++,x,"       / _ \\    ");
        mvprintw(y+line++,x,"      | (_) |   _   _   _   _   _   _   _   _   _           ");
        mvprintw(y+line++,x,"       \\___/   (_) (_) (_) (_) (_) (_) (_) (_) (_)   ");
        mvprintw(y+line++,x," ");
        mvprintw(y+line++,x," ");

        mvprintw(y+line++,x," Please 'ENTER' to continue... ");


}
void splash3() {
        int x = 0, y = 0; //Holds offsets to draw the ASCII art
        for (int i = 0; i < 60; i++) {
                timeout(10);
                int ch = getch(); //Allow them to hit a key to skip the splash screen
                if (ch != ERR) return;

                //Redraw splash screen
                clear();
                words3(i);
                refresh();

                wait_ticks(0.05 * CLOCKS_PER_SEC);
        }
        wait_ticks(0.75 * CLOCKS_PER_SEC);
        clear();
}
void words4(int frame) {
        int x = 60-frame, y = 0, line = 0;
        mvprintw(y+line++,x,"      _____          ");
        mvprintw(y+line++,x,"     |___  |            ");
        mvprintw(y+line++,x,"         / /          ");
        mvprintw(y+line++,x,"        / /   _   _   _   _   _   _   _   _   _             ");
        mvprintw(y+line++,x,"       /_/   (_) (_) (_) (_) (_) (_) (_) (_) (_)      ");


        mvprintw(y+line++,x," ");
        mvprintw(y+line++,x," ");

        mvprintw(y+line++,x," Please 'ENTER' to continue... ");


}
void splash4() {
        int x = 0, y = 0; //Holds offsets to draw the ASCII art
        for (int i = 0; i < 60; i++) {
                timeout(10);
                int ch = getch(); //Allow them to hit a key to skip the splash screen
                if (ch != ERR) return;

                //Redraw splash screen
                clear();
                words4(i);
                refresh();

                wait_ticks(0.05 * CLOCKS_PER_SEC);
        }
        wait_ticks(0.75 * CLOCKS_PER_SEC);
        clear();
}
void words5(int frame) {
    int x = 60-frame, y = 0, line = 0;

    mvprintw(y+line++,x,"         __            ");
    mvprintw(y+line++,x,"        / /_           ");
    mvprintw(y+line++,x,"       | '_ \\        ");
    mvprintw(y+line++,x,"       | (_) |   _   _   _   _   _   _   _   _   _                ");
    mvprintw(y+line++,x,"        \\___/   (_) (_) (_) (_) (_) (_) (_) (_) (_)       ");

}

void splash5() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words5(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}
void words6(int frame) {
    int x = 60-frame, y = 0, line = 0;

    mvprintw(y+line++,x,"        ____        ");
    mvprintw(y+line++,x,"       | ___|         ");
    mvprintw(y+line++,x,"       |___ \\         ");
    mvprintw(y+line++,x,"        ___) |     _   _   _   _   _   _   _   _   _            ");
    mvprintw(y+line++,x,"       |____/     (_) (_) (_) (_) (_) (_) (_) (_) (_)      ");

}
void splash6() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words6(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}
void words7(int frame) {
    int x = 60-frame, y = 0, line = 0;

    mvprintw(y+line++,x,"     _  _          ");
    mvprintw(y+line++,x,"    | || |        ");
    mvprintw(y+line++,x,"    | || |_    ");
    mvprintw(y+line++,x,"    |__   _|   _   _   _   _   _   _   _   _   _                ");
    mvprintw(y+line++,x,"       |_|    (_) (_) (_) (_) (_) (_) (_) (_) (_)          ");

    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," Please 'ENTER' to continue... ");
}
void splash7() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words7(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}
void words8(int frame) {
    int x = 60-frame, y = 0, line = 0;

    mvprintw(y+line++,x,"     _____      ");
    mvprintw(y+line++,x,"    |___ /     ");
    mvprintw(y+line++,x,"        |_\\        ");
    mvprintw(y+line++,x,"      ___) |     _   _   _   _   _   _   _   _   _              ");
    mvprintw(y+line++,x,"     |____/     (_) (_) (_) (_) (_) (_) (_) (_) (_)        ");

    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," Please 'ENTER' to continue... ");
}
void splash8() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words8(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}
void words9(int frame) {
    int x = 60-frame, y = 0, line = 0;

    mvprintw(y+line++,x,"      ____          ");
    mvprintw(y+line++,x,"     |___ \\         ");
    mvprintw(y+line++,x,"        _) |   ");
    mvprintw(y+line++,x,"       / __/     _   _   _   _   _   _   _   _   _                ");
    mvprintw(y+line++,x,"      |_____|   (_) (_) (_) (_) (_) (_) (_) (_) (_)    ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," Please 'ENTER' to continue... ");

}
void splash9() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words9(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}
void words10(int frame) {
    int x = 60-frame, y = 0, line = 0;
    mvprintw(y+line++,x,"          _      ");
    mvprintw(y+line++,x,"         / |         ");
    mvprintw(y+line++,x,"         | |       ");
    mvprintw(y+line++,x,"         | |   _   _   _   _   _   _   _   _   _              ");
    mvprintw(y+line++,x,"         |_|  (_) (_) (_) (_) (_) (_) (_) (_) (_)      ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," ");
    mvprintw(y+line++,x," Please 'ENTER' to continue... ");
}
void splash10() {
    int x = 0, y = 0; //Holds offsets to draw the ASCII art
    for (int i = 0; i < 60; i++) {
        timeout(10);
        int ch = getch(); //Allow them to hit a key to skip the splash screen
        if (ch != ERR) return;

        //Redraw splash screen
        clear();
        words10(i);
        refresh();

        wait_ticks(0.05 * CLOCKS_PER_SEC);
    }
    wait_ticks(0.75 * CLOCKS_PER_SEC);
    clear();
}






