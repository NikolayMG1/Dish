#include "Dish.h"


Dish::Dish(){
    cookTime = 0;
    for(int i = 0; i < capacity; i++){
        this->ingredientsNames[i] = nullptr;
    }
}
Dish::Dish(const char* ingredientsNames[capacity]){
    for(int i = 0; i < capacity; i++){
        strcpy(this->ingredientsNames[i],ingredientsNames[i]);
        size++;
    }
}
Dish::Dish(const Dish& other){
    copy(other);
}
Dish& Dish::operator=(const Dish& other){
    if(this != &other){
        copy(other);
    }   
    return *this;
}
Dish::~Dish(){
    free();
}
void Dish::print(int index){
    if(index < size){
        std::cout << ingredientsNames[index];
    }
    else{
        throw "no dish on this index";
    }
}

void Dish::free(){
    for(int i = 0; i < size; i++){
        delete ingredientsNames[i];
    }
    delete[] ingredientsNames;
}

void Dish::copy(const Dish& other){
    for(int i = 0; i < capacity; i++){
        strcpy(this->ingredientsNames[i],other.ingredientsNames[i]);
    }
    this->cookTime = other.cookTime;
}