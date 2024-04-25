#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
    float x, y;
    std::string name;

    Animal();
    Animal(float a, float b);


    void setName(std::string nume);
    virtual void Walk(float x, float y);
    virtual void Eat(std::string typeOfFood);
    void Pee();
};
///BIRD

class Bird : public Animal
{
public:

    Bird(float a, float b);
    void Eat(std::string typeFood);
    void Walk(float x, float y);
    void Fly(int speed_in_kmh);
    void RipOldFeathers(std::string bodypart, int amount);
};


class Cat : public Animal
{
public:
    int caughtMice;

    Cat(float a, float b);

    void purr();
    void catchMice(int amount);
    void Walk(float x, float y);
    void Eat(std::string typeFood);
};


class Mice : public Animal
{
public:
    Mice(float a, float b);
    void RunFromCats(int num_of_cats);
    void Walk(float x, float y);
    void Eat(std::string typeFood);
};


class Snake : public Animal
{
public:
    float snakeLength;

    Snake(float a, float b, float Slength);

    void beDisgusting();
    void Walk(float x, float y);
};


class RattleSnake : public Snake
{
public:
    void Rattle(int seconds);
};


class Bunny : public Animal
{
public:
    int num_of_jumps;
    int num_of_tricks;
    Bunny(float a, float b);
    void jump();
    void doZoomies();
};


class Dog : public Animal
{
public:
    Dog(float a, float b);
    void Bark();
    void Walk(float x, float y);
    
};

