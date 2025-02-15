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

    cout<< C1.getId() << "is wilcard? " << (C1.IsWild() ? "yes": "no") <<endl;
    cout<< C2.getId() << "is wilcard? " << (C2.IsWild() ? "yes": "no") <<endl;
    cout<< C3.getId() << "is wilcard? " << (C3.IsWild() ? "yes": "no") <<endl;
    cout<< C4.getId() << "is wilcard? " << (C4.IsWild() ? "yes": "no") <<endl;
    cout<< C5.getId() << "is wilcard? " << (C5.IsWild() ? "yes": "no") <<endl;
    return 0;
}