#pragma once
#include <cstring>
#include <iostream>

const unsigned capacity = 100;

class Dish{

    private:
    char* ingredientsNames[capacity];
    unsigned size = 0;
    unsigned cookTime;
    virtual void print(int);
    void free();
    void copy(const Dish& other);
    public:
    Dish();
    Dish(const char* ingredientsNames[capacity]);
    Dish(const Dish&);
    Dish& operator=(const Dish&);
    virtual ~Dish();
};