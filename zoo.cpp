#include <iostream>    
#include "Animal.h"
#include "AnimalsInZoo.h"
#include <stdlib.h>
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Shark", 1967);

   AnimalsInZoo zoo1(animal3);
   zoo1.display();

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   delete animal1;
}
