#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

void Deck::shuffle()
{
    cout << "shuffling cards..."<<endl;
    srand(time(0));
    for (int i = 0; i < size; i++){
        int j = rand() % size;
        Card temp = DeskCards[i];
        DeskCards[i] = DeskCards[j];
        DeskCards[j] = temp;
    }
}