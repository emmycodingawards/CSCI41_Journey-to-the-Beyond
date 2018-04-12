a.out: astro.h planet.h main.o
        g++ -g -O3 -std=c++17  main.o

main.o: main.cc astro.h planet.h
    g++ -g -Wall -Wextra -std=c++17 -c main.cc

clean:
        rm -f a.out core *.o
