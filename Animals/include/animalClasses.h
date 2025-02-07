#pragma once

class Animal
{
    public:
    Animal();
    virtual void speak();
};

class Dog: public Animal{
    public:
    void speak() override;
};

class Cat: public Animal{
    public:
    void speak() override;
};

class Budgie : public Animal{
    public:
    void speak() override;
};