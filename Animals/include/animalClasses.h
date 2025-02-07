#pragma once

class Animal
{
    public:
    Animal();
    virtual void speak();
};

// animal types
class Mammal: public Animal
{
    public:
    virtual void speak();
};

class Bird: public Animal
{
    public:
    virtual void speak();
};

// animals
class Dog: public Mammal{
    public:
    void speak() override;
};

class Cat: public Mammal{
    public:
    void speak() override;
};

class Budgie : public Bird{
    public:
    void speak() override;
};

class Labrador : public Mammal{
    public:
    void speak() override;
};

class Terrier : public Mammal{
    public:
    void speak() override;
};