#include "card.h"
#include <string>
#include <iostream>
using namespace std;

int Card::CounterCards=0;

Card::Card(string color, int number){
    this->colorCard = color;
    this->numberCard = number;
    CounterCards++;
    this->id = CounterCards;
    cout<< "card: "<<this->id<< " Created" <<endl;
}

Card::~Card(){}

void Card::ShowCard(){
    cout<< "card: "<< numberCard << ", "<< colorCard<< ", and ID:" << id <<endl;
}

int Card::getNumber(){
    return numberCard;
}

string Card::getColor(){
    return colorCard;
}

int Card::getId(){
    return id;
}