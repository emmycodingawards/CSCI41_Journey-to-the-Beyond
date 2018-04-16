a.out: main.o astro.h planet.h splash.h
        g++ -g -O3 -std=c++17  main.o -lncurses

main.o: main.cc astro.h planet.h splash.h
        g++ -g -O3 -Wall -Wextra -std=c++17 -c main.cc

clean:
        rm -f a.out core *.o
