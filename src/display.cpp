// for the Class Display, display properties

#include <iostream> //standard input, output library
#include <string> // string library, to use string types
#include "mainstart.h"  // header file, contains all declerations
using namespace std; // for faster programming

string Display::foodfeel(int foodmeasure){ // displays current food feelings on the percents of feelings

    if (foodmeasure  > 75)
    {
        return "Well Fed";
    }
    else if (foodmeasure > 65)
    {
        return "Slightly Peckish";
    }
    else if (foodmeasure > 50)
    {
        return "Rather Hungry";
    }
    else if (foodmeasure > 1)
    {
        return "Starving";
    }
    else
    {
        return "Learning to self sustain, run."; // to be continued as an AI
    }
}

string Display::napfeel(int napmeasure){ // displays current energy feelings on the percents of feelings
    if (napmeasure > 75)
    {
        return "Wide awake";
    }
    else if (napmeasure > 55)
    {
        return "Awake";
    }
    else if (napmeasure > 30)
    {
        return "Tired";
    }
    else if (napmeasure > 1)
    {
        return "Falling asleep";
    }
    else
    {
        return "Kind of Dead, rather zombie"; // Its soul may died, but the body lives on
    }
    
}

void Display::sleep(int energy, int hunger, int happy, string petname_name){ // sleep display and required displays

    int name_spaces = ((70 - petname_name.size())/ 2 )- 1; // To stay approximately inside the brackets with spaces etc.

    cout << "|-------------------------------------------------------------------|\n";
    cout << "|" << string(name_spaces, ' ') <<  petname_name << string(name_spaces, ' ') << "|\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|    Energy level          Happiness level          Hunger level    |\n";
    cout << "|         " << energy << "%        |         " << happy << "%         |           " << hunger << "%        |\n";
    cout << "| It is " << napfeel(energy) << ", and " << foodfeel(hunger) << ".\n";
    cout << "|-------------------------------------------------------------------|\n"; 
    cout << "|                                  __   zz                          |\n";
    cout << "|                                 /oo\\z           /%                |\n"; // million dollar sleep animation
    cout << "|                                 \\__/\\__________/                  |\n";
    cout << "|                                      /         \\                  |\n";
    cout << "|                                      \\_________/                  |\n";
    cout << "|                                     -------------                 |\n";
    cout << "|___________________________________________________________________|\n";
    cout << "| Press F for Feeding | Press N for Napping | Press P for Playing   |\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "| Press H for Punching| A to Abandon(It dies)    |Q to quit         |\n";
    cout << "|-------------------------------------------------------------------|\n";
    
}

void Display::mains(int energy, int hunger, int happy, string petname_name){ // main display and required displays
    int name_spaces = ((70 - petname_name.size())/ 2 )- 1;

    cout << "|-------------------------------------------------------------------|\n";
    cout << "|" << string(name_spaces, ' ') <<  petname_name << string(name_spaces, ' ') << "|\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|    Energy level          Happiness level          Hunger level    |\n";
    cout << "|         " << energy << "%        |         " << happy << "%         |           " << hunger << "%        |\n";
    cout << "| It is " << napfeel(energy) << ", and " << foodfeel(hunger) << ".\n";
    cout << "|-------------------------------------------------------------------|\n"; 
    cout << "|                                  __                               |\n";
    cout << "|                                 /oo\\            /%                |\n";
    cout << "|                                 \\__/\\__________/                  |\n"; // casually living
    cout << "|                                      /         \\                  |\n";
    cout << "|                                      \\_________/                  |\n";
    cout << "|                                         |    |                    |\n";
    cout << "|___________________________________________________________________|\n";
    cout << "| Press F for Feeding | Press N for Napping | Press P for Playing   |\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "| Press H for Punching| A to Abandon(It dies)    |Q to quit         |\n";
    cout << "|-------------------------------------------------------------------|\n";

}

void Display::feed(int energy, int hunger, int happy, string petname_name){ // feeded display, and required displays
    int name_spaces = ((70 - petname_name.size())/ 2 )- 1;

    cout << "|-------------------------------------------------------------------|\n";
    cout << "|" << string(name_spaces, ' ') <<  petname_name << string(name_spaces, ' ') << "|\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|    Energy level          Happiness level          Hunger level    |\n";
    cout << "|         " << energy << "%        |         " << happy << "%         |           " << hunger << "%        |\n";
    cout << "| It is " << napfeel(energy) << ", and " << foodfeel(hunger) << ".\n";
    cout << "|-------------------------------------------------------------------|\n"; 
    cout << "|                    |              __                              |\n";
    cout << "|                /--\\|/--\\         /oo\\            /%               |\n";
    cout << "|                |       |         \\__/\\__________/                 |\n";
    cout << "|                 |     |              /         \\                  |\n"; // its eating a huge apple
    cout << "|                  |___|               \\_________/                  |\n";
    cout << "|                                         |    |                    |\n";
    cout << "|___________________________________________________________________|\n";
    cout << "| Press F for Feeding | Press N for Napping | Press P for Playing   |\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "| Press H for Punching| A to Abandon(It dies)    |Q to quit         |\n";
    cout << "|-------------------------------------------------------------------|\n";

}

void Display::dead(bool natural, bool beaten, bool killed_itself, int hurt, string petname_name){ //death display(art) and required properties for respect
    int name_spaces = ((70 - petname_name.size())/ 2 )- 1;
    string cause = ""; // to be displayed later on
    if (natural) //natural caused death, (starvation, tiredness)
    {
        cause = "It died of natural causes, Rest in peace " + petname_name;
    }
    else if (beaten) // died of a hit
    {
        string hrt = to_string(hurt);
        cause = "It was beaten to death(Punched " + hrt + " times). Rest in peace " + petname_name;  
    }
    else if (killed_itself) // after being abandoned
    {
        cause = "It was so sad, it killed itself. Rest in peace " + petname_name;
    }
    else
    {
        cause = "The game ended."; // Died in mistery
    }
    
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|" << string(name_spaces - 6, ' ')<<" late " <<  petname_name << string(name_spaces, ' ') << "|\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|    Energy level          Happiness level          Hunger level    |\n";
    cout << "|         Dead       |          Dead         |           Dead       |\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << "|                  _________-----_____                              |\n";
    cout << "|        ____------           __      ----_                         |\n";
    cout << "|  ___----             ___------              \\                     |\n";
    cout << "|     ----________        ----                 \\                    |\n";
    cout << "|                -----__    ^|             _____)                   |\n";
    cout << "|                     __-                /     \\                    |\n"; // Its soul racing to heaven
    cout << "|         _______-----    ___--          \\    /)\\                   |\n";
    cout << "|   ------_______      ---____            \\__/  /                   |\n";
    cout << "|                -----__    \\ --    _          /\\                   |\n";
    cout << "|                       --__--__     \\_____/   \\_/\\                 |\n";
    cout << "|                               ---^|   /          ^|               |\n";
    cout << "|                                  ^| ^|___________^|               |\n";
    cout << "|                                  ^| ^| ((_(_)^| )_)               |\n";
    cout << "|                                  ^|  \\_((_(_)^|/(_)               |\n";
    cout << "|                                   \\             (                 |\n";
    cout << "|                                    \\_____________)                |\n";
    cout << "|-------------------------------------------------------------------|\n";
    cout << " Sadly, " << cause << "\n"; // respectful farewell
}