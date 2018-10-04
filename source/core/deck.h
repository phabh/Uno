#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

using namespace std;

class Deck
{
    private:
        vector<Card> cardVector;
        void generateDeck();
    public:
        Deck();
        Deck(vector<Card> cards);
        Card pickACard();
        void shuffle();
};

#endif