#include "card.h"
#include "deck.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Card C1("red", "1");//firts car
    Card C2("green", "6");
    Card C3("black", "2");
    Card C4("yelow", "9");
    Card C5("blue", "#");

    Deck drawDeck;

    drawDeck.insertCardDeck(C1);
    drawDeck.insertCardDeck(C2);
    drawDeck.insertCardDeck(C3);
    drawDeck.insertCardDeck(C4);
    drawDeck.insertCardDeck(C5);
    drawDeck.showDesk();

    drawDeck.shuffle();
    drawDeck.showDesk();
    return 0;
}