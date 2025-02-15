#include "card.h"
#include "deck.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Card C1("red", 1);//firts car
    Card C2("green", 2);
    //insert cards
    Deck DrawDeck;// declare draw
    DrawDeck.insertCardDeck(C1);
    DrawDeck.showDesk();
    DrawDeck.insertCardDeck(C2);
    DrawDeck.showDesk();

    return 0;
}