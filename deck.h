#ifndef DECK_H
#define DECK_H
#include <string>
#include "card.h"
using namespace std;

class Deck
{
private:
    int size;        // Current size of the deck
    Card DeskCards[108];
public:
    Deck ();
    void insertCardDeck(Card NewCard);
    void showDesk();

};




#endif