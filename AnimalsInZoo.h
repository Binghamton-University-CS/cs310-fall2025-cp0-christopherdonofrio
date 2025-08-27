#include <string>
#include "Animal.h"
#pragma once

using namespace std;

class AnimalsInZoo {
public:
    AnimalsInZoo(const Animal& a);
    AnimalsInZoo();

    void display();


private:
    int numAnimals;
    Animal animal;
};

