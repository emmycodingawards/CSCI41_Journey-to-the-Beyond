# Journey to the Beyond - Travels of the Yenrek XLII


# Mr. Kerney's Guide to Understanding Who-Did-What

 - Basically, we all worked together on everything because we made an awesome team. Thank you for letting us be a group. Please Kerney go by the amount of LINES we wrote, and not by COMMITS. 
 - Emmy Issa: ReadMe, physics functions in main, hash table, heap, directions for user,
 - Preet Jyotpreet: Splash text, researching graphics,
 - Christiana Huiskens: Graphical interface for solar system, researching Unity, learning C#, researching graphics of all sorts (dev c++ with graphics.h, unity, ncurses), debugging, keeping Emmy's crazy overachieving ideas in check
 - Denise Gaona: Physics functions in main, getting Kerney to extend deadline by a day

# DIRECTIONS:

 - NASA Rocket Name: Yenrek XLII (Kerney backwards and 24 in Roman Numerals)
 - It is the year 2077. Technology has advanced so that it is possible to travel to all 9 planets (YES PLUTO IS A PLANET) in a year, given you chose the right variables. 
 - You will input supplies (water, food, oxygen), velocity, and number of astronauts.
 - Program will give user amount of fuel (a full tank).
 - Based on input velocity and a full tank of fuel, program will calculate the escape speed and how long rocket can be in space before it needs to return to Earth for more supplies and fuel.
 - Based on calculated escape speed, program will tell you if you can leave the Earth's atmosphere successfully or not.
 - Based on the calculated time, you must decide the route you want to take to reach as many planets as possible.
 - Warning: The more astronauts you take on board, the faster supplies will run out.
 - Warning: The faster the speed you travel at, the faster your fuel will run out.
 - Think wisely about your input values!

# HEAP:

- Use Priority queue from queue STL.
- Use this to store information about nearby planets(Moon, Mars, ...).
- Minimum heap (with min as the root).
- Root will be the Planet that is nearest the rocket. Program will update the user as to which planet is nearest the rocket in "live" time.
- Once rocket has passed a planet, its distance will be set to 10x its last distance. This allows the planet to still be stored in the heap, but all the way in bottom.
- Heap will update as rocket travels through space and planets are "unlocked" (reached).

 
# HASH TABLE:

- Using STL, unordered_map.
- Used to store information about astronauts.
- astro.h header file for our "astro" class declaring astronauts with 4-digit ID (int), name (string), health (int), time_on_rocket (float).
- Associative will be Astro class and key will be ID (int).

# GRAPHICAL INTERFACE: 

 - Unity for graphics. //tried but computer crashed and lost everything. Wrote code in c# and had planets.
 - Tried using Dev C++ with graphics.h didnt work (wrote code for that)
 - Tried printing circles using cout statements worked but couldn't print Concentric circles
 -NOW using ncurses.h 

 # SCORE COUNT: 
 
 - Happening in main.
 - All public variables for the sake of easiness.
 - Keep track of: days, rocket fuel, velocity, general supplies (food, water, oxygen).
 - Functions: escape speed, gravitational pull of planets, distance travelled, acceleration (centripetal).
 
