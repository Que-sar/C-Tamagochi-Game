#include <string> // string library, to use string types

class Feelings { // for mainly the Feelings, and some actions class that would change potentionally feelings

    int energy = 100; // private energy level
    int hunger = 100; // private hunger level
    int happiness = (get_energy_level() + get_hunger_level()) / 2; //private happiness level
    int hurt_o_meter = 0; //private received number of punches level

    public: // from now on, these can be accessed from out of the class

    bool alive = true; // if its alive
    bool death_by_natural_causes = false; // died by energy, hunger
    bool beaten_to_death = false; // died by hitting
    bool suicide = false; // died by abandonement

    int get_energy_level(); // to get energy level
    int get_hunger_level(); // to get hunger level
    int get_hurt_meter(); // to get hurt level
    int get_happiness(); // to get the happiness level

    void set_happiness(); // setting happiness to algorithm
    void set_hurt_o_meter(int amount_of_pain);  // setting up number of hurtful punches
    void set_hunger_level(int amount_of_food); // setting up number of food
    void set_energy_meter(int amount_of_energy); // setting up amount of energy

    void give_nap(int time_to_sleep); // giving nap, while checking the limit, also displaying feelings
    void give_food(int food_to_give); // giving food, while checking the limit, also displaying feelings

    void death(); // death checker

    void play(); // for playing with it
    void punch(); // for hitting it


};   

class Naming { // for Naming the pet

    std::string pet_name; // the name stored(privately)

    public: // from now on, these can be accessed from out of the class

    std::string get_pet_name(); // getting the name of our pet

    void set_pet_name(std::string new_name); // setting the name of our pet

};

class Display { // for the Displays in the console class

    public:

    void sleep(int energy, int hunger, int happy, std::string petname_name); // sleep display
    void mains(int energy, int hunger, int happy, std::string petname_name); // main display
    void feed(int energy, int hunger, int happy, std::string petname_name); // food display
    void dead(bool natural, bool beaten, bool killed_itself, int hurt, std::string petname_name); //death display

    std::string foodfeel(int foodmeasure); // for more displayed feelings, needs, foodwise
    std::string napfeel(int napmeasure); // for more displayed feelings, needs, energywise
};

class Life { // can give, or take away class of Life (luck plays part in it)

    public:

    int varminus(); // all the minuses up to 20, subtracted every turn
    int varplus(); // all the pluses up to 20, added every turn

};
