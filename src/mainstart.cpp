#include <iostream>  //standard input, output library
#include <string> // string library, to use string types
#include "mainstart.h" // header file, contains all declerations
//#ifdef _WIN32
//#include <windows.h>  // sleep function on windows
//#else
//#include <unistd.h> // for the sleep function, to see the feelings of the pet, about certain actions
//#endif
#include <chrono> // the compiler had problems with the windows.h, so i decided its easier if i use a thread
#include <thread> // instead of the sleep function
using namespace std; // for faster use


int main(){

    int dispo = 1; //display checker, selects necessary display after certain actions

    Naming pet; // Naming pet object

    string resp = ""; // for storing an input
    string name = "your pet"; // name, default name is your pet
    cout << "Welcome new Owner! Do you want to name your pet?\n"; //asking for name
    cin >> resp; // storing resp
    if (resp == "yes" || resp == "Yes")
    {
        cout << "Feel free to type it in.\n";
        cin >> name; 
    }
    pet.set_pet_name(name); //changing name of pet object

    Feelings start; // starting a Feelings object
    Display visualise; // starting a Display object
    Life randomise; // starting a Life object

    while (start.alive){ //Loops through the game

        //system("clear"); // to avoid flooded command line (linux)
        system("cls"); // to clear command line in windows

        if (dispo == 1) // displaying main visuals
        {
            visualise.mains(start.get_energy_level(), start.get_hunger_level(), start.get_happiness(), pet.get_pet_name());
        }
        else if (dispo == 2) // displaying fed visuals
        {
            visualise.feed(start.get_energy_level(), start.get_hunger_level(), start.get_happiness(), pet.get_pet_name());
        }
        else if (dispo == 3) // displaying napping visuals
        {
            visualise.sleep(start.get_energy_level(), start.get_hunger_level(), start.get_happiness(), pet.get_pet_name());
        }
 
        char inputw; //input actions stored
        cin >> inputw;
        if (inputw == 'f' || inputw == 'F') // as Feed
        {
            start.give_food(randomise.varplus()); // Giving random amount of food up to 20%
            dispo = 2; // setting food visuals for next time
        }
        else if (inputw == 'p' || inputw == 'P') // as Play
        {
            start.play(); // starting the play function
            dispo = 1; // setting visuals to main
        }
        else if (inputw == 'n' || inputw == 'N') // as Nap
        {
            start.give_nap(randomise.varplus()); //giving random amount of napping up to 20%
            dispo = 3; // feeding visuals
        }
        else if (inputw == 'h' || inputw == 'H') // as Hit
        {
            start.punch(); // Punching the tamagochi function for faster death, faster outcomes
            dispo = 1; // setting visuals to main
        }
        else if (inputw == 'q' || inputw == 'Q') // as Quit
        {
            break;
        }
        else if (inputw == 'a' || inputw == 'A') // as Abandon (kills)
        {
            start.suicide = true; // abandoned, so it committed suicide in sadness
        }
        
        

        start.set_energy_meter(randomise.varminus()); // Turns of life, minuses energy } Even if napped, the nap may not be enough just like in life
        start.set_hunger_level(randomise.varminus()); // Turns of life, minuses hunger } Even if feeded, the food may not be enough just like in life
        start.set_happiness(); // setting happiness to (energy + hunger) / 2


        start.death(); // Checking if death happened, and some causes

        //sleep(2); // sleeping command line, to see feelings about actions
        //sleep(2000); // windows sleep
        this_thread::sleep_for(chrono::milliseconds(3000)); // for sleeping 3 seconds, and displaying
        

    }
    visualise.dead(start.death_by_natural_causes, start.beaten_to_death, start.suicide, start.get_hurt_meter(), pet.get_pet_name()); // displayng death screen(skull flying away)

    return 0;
}