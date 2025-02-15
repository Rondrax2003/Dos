#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card
{
friend class Deck;
private:
    static int CounterCards;
    string colorCard;
    int numberCard;
    int id;
public:
    Card(){};
    Card(string color, int number);
    ~Card();
    void ShowCard();
    int getNumber();
    string getColor();
    int getId();
};

#endif