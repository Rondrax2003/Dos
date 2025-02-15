#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card
{

private:
    static int CounterCards;
    string colorCard;
    string numberCard;
    int id;
    bool Wildcard;
public:
    Card(){};
    Card(string color, string number);
    ~Card();
    void ShowCard();
    string getNumber();
    string getColor();
    int getId();
    bool IsWild();
};

#endif