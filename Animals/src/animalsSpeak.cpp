#include <iostream>
#include <vector>
#include "animalClasses.h"
#include <memory>

int main()
{
    //declare a vector of animal pointers here
    std::vector<std::unique_ptr<Animal>> animalVec;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    animalVec.push_back(std::unique_ptr<Dog>());
    animalVec.push_back(std::unique_ptr<Cat>());
    animalVec.push_back(std::unique_ptr<Budgie>());
    animalVec.push_back(std::unique_ptr<Labrador>());
    animalVec.push_back(std::unique_ptr<Terrier> ());

    //loop through all the animals in your vector and call Speak() on them in turn
    for (const auto& animal : animalVec) {
        animal->speak();
    }

    return 0;
}