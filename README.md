# CSCI41_ScienceSim


Mr. Kerney's Guide to Understanding Who-Is-Doing-What::

Heap: Preet Jyotpreet
Hash Table:Emmy Issa
Score Count: Denise Gaona
Graphical Interface: Christiana Huiskens

I and Emmy talked about the name of our spaceship and came up with an idea that we can name it "Yenrek XLII." This is Kerney's name written backwards and XLII stands for 42(Kenery's lucky number) (lol) Is it okay Denise and Christiana? Feel free to make changes. 


HEAP::

- Use Priority queue fron queue STL
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

Graphical Interface:: 

- unity/unreal engines for graphics.
// unity:: According Kerney unity is in 90% c++ and rest c#. Hence, we need to learn new language if we want to use unity.
//HOW does it incorporate user inputs??
//looks like im learning c#

 Score Count (In Main) :: 
 
 - we are making everything public, (lets not) so no get/set functions. //we should be using some private variables
 - keep track of atsro time on rocket // astro can only be there for 6 months. 
 - keep track of astro health. //How??
 - try making one puzzle of escape velocity. Refer back to Meyers notes ( I believe it v = GM/r^2).
 - keep track of rocket fuel. 
 - keep track of velocity in space.
 - keep track of general supplies. 
 
