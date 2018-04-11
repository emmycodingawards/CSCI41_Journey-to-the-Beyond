# CSCI41_ScienceSim


Mr. Kerney's Guide to Understanding Who-Is-Doing-What::

Heap:: Preet Jyotpreet

Hash Table:: Emmy Issa

Score Count:: Denise Gaona

Graphical Interface:: Christiana Huiskens


PLANS::


HEAP:: 

-Used priority queue from queue STL

-Used to store information about nearby planets(/moons?)

-Minimum heap (with min as the root)

-Root will be the planet that is nearest the rocket. Program will update the user as to which planet is nearest the rocket in "live" time

-Once rocket has passed a planet, its distance will be set to 10x its last distance. This allows the planet to still be stored in the heap, but all the way in the bottom

-Heap will update as rocket travels through space and planets are "unlocked" (reached)


HASH TABLE::

-Using STL, unordered_map

-Used to store information about astronauts

-astro.h header file for our "astro" class declaring astronauts with 4-digit ID (int), name (string), health (int), time_on_rocket (float)

-Associative will be Astro class and key will be ID (int)
