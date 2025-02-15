#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
using namespace std;

Deck::Deck(){
    size = 0;
}


void Deck::insertCardDeck(Card NewCard){
    if(size == 108)
    {
        cout<< "desck complete, remuve extra card"<<endl;
        return;
    }
    DeskCards[size] = NewCard;
    cout<<"card: "<< NewCard.getId() << " added" << endl;
    size++;       
}

void Deck::showDesk()
{
    cout<< "cards in the deck: "<<endl;
    for(int i=0; i<size; i++)
    {
        DeskCards[i].ShowCard();
    }

}