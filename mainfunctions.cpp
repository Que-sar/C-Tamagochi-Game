//For the Feelings, and Naming class
#include <iostream> //standard input, output library
#include "mainstart.h" // header file, contains all declerations

int Feelings::get_energy_level(){ // getting energy level(private by default)
    return energy;
}

int Feelings::get_hunger_level(){ // getting hunger level(private by default)
    return hunger;
}

int Feelings::get_hurt_meter(){ // getting punch level(private by default) nobody will know, just the class
    return hurt_o_meter;
}

int Feelings::get_happiness(){ // getting happiness level(private by default)
    return happiness;
}

void Feelings::set_happiness(){ // setting happiness, can only equal (energy + hunger) / 2
    happiness = (get_hunger_level() + get_energy_level()) / 2;
}

void Feelings::set_hurt_o_meter(int amount_of_pain){ // setting punch amount
    hurt_o_meter += amount_of_pain;
}

void Feelings::set_energy_meter(int amount_of_energy){ // setting energy amount
    energy += amount_of_energy;
}

void Feelings::set_hunger_level(int amount_of_food){ // setting food amount
    hunger += amount_of_food;
}

void Feelings::give_nap(int time_to_sleep){ // giving a nap, displaying true feelings
    if (time_to_sleep > 0){
        if (time_to_sleep + get_energy_level() > 100) // if the amount gets over 100, it cant sleep
        {
            std::cout << "I am sorry dear owner, but I am not that tired right now." << "\n";
        }
        else // otherwise its happy to do it
        {
            energy += time_to_sleep;
            std::cout << "Thank You owner! I am feeling better now, that you gave me a nap." << "\n";
        } 
    } 
}

void Feelings::give_food(int food_to_give){
    if (food_to_give > 0){
        if (get_hunger_level() + food_to_give > 100) // if the amount would get over 100, it cant eat any more
        {
            std::cout << "I am sorry dear owner, but I can not eat that much food now." << "\n";
        }
        else // Eats the amount of food
        {
            hunger += food_to_give;
            std::cout << "Thank You owner! I am feeling better foodwise!" << "\n";
        }
    }
}

void Feelings::death(){ // to check if  its dead, and refresh causes for proper death display later on

    if (beaten_to_death)
    {
        alive = false;
    }
    else if (get_energy_level() <= 0)
    {
        alive = false;
        death_by_natural_causes = true;
    }
    else if (suicide)
    {
        alive = false;
    }
    else if(get_hunger_level() <= 0)
    {
        alive = false;
        death_by_natural_causes = true;
    }
    
}

void Feelings::punch(){ // for the hit input, as we can see it hurts

    set_hurt_o_meter(1); // increasing punch number
    set_energy_meter(-20);
    set_hunger_level(-20);
    if (get_happiness() <= 0)
    {
        beaten_to_death = true;
    }
    else if (get_hunger_level() <= 0)
    {
        beaten_to_death = true;
    }
    else if (get_energy_level() <= 0)
    {
        beaten_to_death = true;
    }
    
}

void Feelings::play(){ // playing with the tamagochi, the only way to successfully keep it alive, because life may give less food, nap for it
    if (get_energy_level() <= 80)
    {
        set_energy_meter(20);
    }
    if (get_hunger_level() <= 80)
    {
        set_hunger_level(20);
    }
}


std::string Naming::get_pet_name(){ // to get the name of the tamagochi
    return pet_name;
}

void Naming::set_pet_name(std::string new_name){ // to set the name of the tamagochi
    pet_name = new_name;
    
}
