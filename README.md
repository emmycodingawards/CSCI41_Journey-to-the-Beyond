# CSCI41_Journey-to-the-Beyond
# Travels of the Yenrek XLII


Mr. Kerney's Guide to Understanding Who-Is-Doing-What

 - Heap: Preet Jyotpreet
 - Hash Table: Emmy Issa
 - Score Count: Denise Gaona
 - Graphical Interface: Christiana Huiskens

NASA Rocket Name: Yenrek XLII (Kerney backwards and 24 in Roman Numerals)

HEAP:

- Use Priority queue from queue STL
- Use this to store information about nearby planets( /moons?)
- Minimum heap (with min as the root)
- Root will be the Planet that is nearest the rocket. Program will update the user as to which planet is nearest the rocket in "live" time.
- Once rocket has passed a planet, its distance will be set to 10x its last distance. This allows the planet to still be stored in the heap, but all the way in bottom.
- Heap will update as rocket travels through space and planets are "unlocked" (reached)

 
HASH TABLE:

- Using STL, unordered_map
- Used to store information about astronauts
- astro.h header file for our "astro" class declaring astronauts with 4-digit ID (int), name (string), health (int), time_on_rocket (float)
- Associative will be Astro class and key will be ID (int)

GRAPHICAL INTERFACE: 

 - Unity for graphics
 - Code will be in C# but will have to accomodate C++ user input code (main.cc and header file(s))

 SCORE COUNT: 
 
 - Happening in main
 - All public variables for the sake of easiness
 - Keep track of astronaut time on rocket. They can only be there for six months
 - Keep track of astronaut health //We need to figure out what affects astronaut health if we want to do this - EI
 - Keep track of rocket fuel
 - Keep track of velocity in space
 - Keep track of general supplies
 - Make a function using escape velocity: v = GM/r^2
 
 
