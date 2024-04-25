#pragma once
#include "Classes.h"


    Animal::Animal() { x = 0; y = 0; } 
    Animal::Animal(float a, float b) : x(a), y(b){}
    
    void Animal::setName(std::string nume)
    {
        name = nume;
    }
    void Animal::Walk(float x, float y)
    {
	    float time_in_sec = (1 * x) + (1 * y);
        std::cout << "Animal's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;

	    this->x += x;
	    this->y += y;
	    std::cout << "The animal's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
	    std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
    }
    void Animal::Eat(std::string typeOfFood)
    {
	    std::cout << "The animal is eating " << typeOfFood << std::endl;
    }
    void Animal::Pee()
    {
	    std::cout << "This animal is doing something gross." << std::endl;
    }

///////BIRD

    Bird::Bird(float a, float b)
    {
        x = a;
        y = b;
    }
    void Bird::Eat(std::string typeFood)
    {
        std::string disliked = "tobacco, sugar";
        std::string delim = ",";
        std::string temp = disliked.substr(disliked.find(typeFood), typeFood.size());

        if (!temp.empty())
        {
            std::cout << "The bird does not like this food and therefore IS NOT going to eat it. " << std::endl;
        }
        else
        {
            std::cout << "The bird is eating " << typeFood << std::endl;
        }
    }
    void Bird::Walk(float x, float y)
    {
        float time_in_sec = (1.25 * x) + (1.25 * y);
        std::cout << "Bird's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;

        this->x += x;
        this->y += y;
        std::cout << "The animal's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
        std::cout << "This bird is using its tiny legs to walk slowly." << std::endl;
    }
    void Bird::Fly(int speed_in_kmh)
    {
        std::cout << "This bird is flying at " << speed_in_kmh << "kmh.";
    }
    void Bird::RipOldFeathers(std::string bodypart, int amount)
    {
        std::cout << "This bird has cleaned itself of " << amount << " feathers from " << bodypart << '.';
    }
   

/// CAT CAT CAT
    Cat::Cat(float a, float b)
    {
        x = a;
        y = b;
        caughtMice = 0;
    }
    void Cat::purr()
    {
        std::cout << "The cat is PURRing..." << std::endl;
    }
    void Cat::catchMice(int amount)
    {
        caughtMice += amount;
        std::cout << "This cat has caught " << amount << " mice." << std::endl;
    }
    void Cat::Walk(float x, float y)
    {
        float time_in_sec = (0.4 * x) + (0.4 * y);
        std::cout << "Cat's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;

        this->x += x;
        this->y += y;
        std::cout << "The cat's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
        std::cout << "***FUN FACT***: Did you know cats are like mini tigers inside your home? Plus, they are VERY FAST." << std::endl;
    }
    void Cat::Eat(std::string typeFood)
    {
        std::string disliked = "chocolate, cream, tobacco";
        std::string delim = ",";
        std::string temp = disliked.substr(disliked.find(typeFood), typeFood.size());

        if (!temp.empty())
        {
            std::cout << "The cat does not like this food and therefore IS NOT going to eat it. " << std::endl;
        }
        else
        {
            std::cout << "The cat is eating " << typeFood << std::endl;
        }
    }
   
    /// MICE MICE MICE
    Mice::Mice(float a, float b)
    {
        x = a;
        y = b;
    }
    void Mice::RunFromCats(int num_of_cats)
    {
        std::cout << "This mouse has outran " << num_of_cats << " cats." << std::endl;
    }
    void Mice::Walk(float x, float y)
    {
        float time_in_sec = (0.69 * x) + (0.69 * y);
        std::cout << "Mouse's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;


        this->x += x;
        this->y += y;
        std::cout << "The mouse's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
        std::cout << "***FUN FACT***: Kind of disgusting creatures. Pretty quick tho'." << std::endl;
    }

    void Mice::Eat(std::string typeFood)
    {
        std::string disliked = "chocolate, cyanide";
        std::string delim = ",";
        std::string temp = disliked.substr(disliked.find(typeFood), typeFood.size());

        if (!temp.empty())
        {
            std::cout << "The mouse does not like this food and therefore IS NOT going to eat it. " << std::endl;
        }
        else
        {
            std::cout << "The mouse is eating " << typeFood << std::endl;
        }
    }


//// SNAKE 
    Snake::Snake(float a, float b, float Slength)
    {
        x = a;
        y = b;
        snakeLength = Slength;
    }
    void Snake::beDisgusting()
    {
        std::cout << "Making disgusting sounds.";
    }

    void Snake::Walk(float x, float y)
    {
        float time_in_sec = (2 * x) + (2 * y);
        std::cout << "Snake's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        this->x += x;
        this->y += y;

        std::cout << "The animal's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
        std::cout << " ***FUN FACT ***: Snakes don't really walk, because they do not have legs. Instead they crawl?" << std::endl;
    }

    void RattleSnake::Rattle(int seconds)
    {
        std::cout << "This Rattlesnake's been rattling for " << seconds << " seconds. Is it gonna stop?" << std::endl;
    }

    /// BUNNY BUNNY BUNNY
    Bunny::Bunny(float a, float b)
    {
        x = a;
        y = b;
    }
    void Bunny::jump()
    {
        std::cout << "The bunny jumped!" << std::endl;
        num_of_jumps++;
        std::cout << "Total number of jumps is: " << num_of_jumps << std::endl;
    }
    void Bunny::doZoomies()
    {
        std::cout << "The bunny did a really nice trick!" << std::endl;
        num_of_tricks++;
        std::cout << "Total number of trick is: " << num_of_tricks << std::endl;
    }

    ///     DOG DOG
    Dog::Dog(float a, float b)
    {
        x = a;
        y = b;
    }
    void Dog::Bark()
    {
        std::cout << "Ruff ruff!!!" << std::endl;
    }
    void Dog::Walk(float x, float y)
    {
        float time_in_sec = (0.9 * x) + (0.9 * y);
        std::cout << "Dog's previous position in the world was: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        this->x += x;
        this->y += y;
        
        std::cout << "The animal's new position in the world is: " << this->x << " latitude, " << this->y << " longitude." << std::endl;
        std::cout << "Seconds taken to reach new destination: " << time_in_sec << std::endl;
        std::cout << "***FUN FACT: Nothing to say here. Man's best friend. We love dogs, and dogs love us. Pretty quick animals." << std::endl;
    }
