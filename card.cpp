#include "card.h"
#include <string>
#include <iostream>
using namespace std;

int Card::CounterCards=0;

Card::Card(string color, string number)
{
    this->colorCard = color;
    this->numberCard = number;
    CounterCards++;
    this->id = CounterCards;
    if(colorCard == "black" && numberCard == "2")
    {
        this->Wildcard = true;
    }else if(numberCard == "#")
    {
        this->Wildcard =  true;
    }else
    {
        this->Wildcard = false;
    }
    cout<< "card: "<<this->id<< " Created" <<endl;
}

Card::~Card(){}

void Card::ShowCard()
{
    cout<< "card: "<< numberCard << ", "<< colorCard<< ", ID:" << id <<endl; 
    if(IsWild())
    {
        cout<< "and is wilcard"<<endl;
    }
}

string Card::getNumber(){
    return numberCard;
}

string Card::getColor(){
    return colorCard;
}

int Card::getId(){
    return id;
}

bool Card::IsWild()
{
    return Wildcard;
}