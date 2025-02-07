#include "animalClasses.h"
#include <iostream>

Animal::Animal(){
};

void Animal::speak(){
    std::cout << "Make sound" << std::endl;
}

void Mammal::speak(){
    std::cout << "Make mammal sound" << std::endl;
}

void Bird::speak(){
    std::cout << "Make bird sound" << std::endl;
}

void Dog::speak(){
    std::cout << "Woof" << std::endl;
}

void Cat::speak(){
    std::cout << "Meow" << std::endl;
}

void Budgie::speak(){
    std::cout << "Tweet" << std::endl;
}

void Labrador::speak(){
    std::cout << "Woof" << std::endl;
}

void Terrier::speak(){
    std::cout << "Yap" << std::endl;
}