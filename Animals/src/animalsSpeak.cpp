#include <iostream>
#include <vector>
#include "animalClasses.h"

int main()
{
    //declare a vector of animal pointers here
    std::vector<Animal*> animalVec;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    animalVec.push_back(new Dog());
    animalVec.push_back(new Cat());
    animalVec.push_back(new Budgie());

    //loop through all the animals in your vector and call Speak() on them in turn
    for (Animal* animal : animalVec) {
        animal->speak();
    }

    return 0;
}