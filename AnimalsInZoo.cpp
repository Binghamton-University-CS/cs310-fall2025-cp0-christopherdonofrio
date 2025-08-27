#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

void AnimalsInZoo::display() {
    cout << "Zoo:" << endl;
    cout << "Number of animals: " << numAnimals << endl;
    if (numAnimals > 0) {
        animal.display();

    }
        cout << "" << endl;

}
