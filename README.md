# Basic Tamagochi Game for Simple University Assignment in C++


## Submission Form
Please ensure you fully complete all FOUR questions on this form before submitting your
assignment.

It was created in Linux ubuntu, compiled in the following command:
g++ mainstart.cpp mainfunctions.cpp display.cpp variate.cpp
There should be 5 files, 1 header, 4 cpp.
mainstart.cpp mainfunctions.cpp display.cpp variate.cpp and mainstart.h

### 1. Please list the programming constructs you have used.
I have used Functions, a while loop, multiple classes, libraries, if else statements.

### 2. Describe in simple language how your program works.
It is turn based. When started, it asks if we want to name the pet, if yes, it will start at the
given name. After that the main display shows up, and we have multiple choices of what to do
with the pet. The feeding, napping will always go up, however the negatives(the requirements
of its life) will always go down a bit, making it hard to keep it alive, but the playing function
will not only make the pet happier, but it also gives it the maximum amount of food, energy,
as in life, playing with a pet is usually rewarded by food, or relaxing care. You can also
abandon it, which will result in an immediate death, it will kill itself out of depression, because
it feels lonely. Hitting it is also an option which will not only damage the energy and food
levels, but also subtracts the necessary food and energy for that turn. After death, a special
display will appear.

### 3. Please describe below any additional features that you’ve included in your programme, if none what would you add if you had more time?
- There is a display.
- Not only the main display, but feeding, napping and death display is also found.
- The death display shows the cause of death every time.
- The displays are unique.
- Not only the regular current feelings change, it also displays them in percentages every
time.
-The name is also always shown.
-When feeded, napped it will always respond in a way of its current feelings.
-The abandon function is also unique.
-The punch function is also unique, making the game faster, adding an outcome.
-The death display contains when the tamagochi is beaten to death, how many times it was
punched, to increase the players self awareness towards others, making them feel guilty.
-The terminal is never flooded(full of the displays), every turn it clears itself, except for dying,
so that we can see what its last minutes looked like.
- It asks for a name nicely, and has no problem with us not giving one.
- It is object oriented, it can be reused in a few lines of code.
-It would have been improved upon with concurrent programming, so that the game would
cease to be turn based, it could run multi threaded, and after a specific amount of time, it
could apply the necessary life essentials(food, energy) for the cyber pet.

### 4. Please paste your code into the box below, ensuring it has been formatted correctly
I have supplied the code in an another PDF, for more readability, but the code file
should be formatted better.

### 5. Please include screenshots of your program running to demonstrate any features that you wish to highlight.

![Main Screen](https://github.com/Que-sar/C-Tamagochi-Game/blob/main/docs/whenfull.png)<br>
Main display, example of a feeding, when already full.


![Death Screen](https://github.com/Que-sar/C-Tamagochi-Game/blob/main/docs/deathscreen.png)<br>
Death screen, and last action, percentages of needs, last picture.
