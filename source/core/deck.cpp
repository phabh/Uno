#ifndef DECK_CPP
#define DECK_CPP

/*
Ao Todo 108 cartas no Uno, que se dividem desta maneira: 

►19 cartas azuis - de 0 a 9; 
►19 cartas verdes - de 0 a 9; 
►19 cartas vermelhas - de 0 a 9; 
►19 cartas amarelas - de 0 a 9; 
► 8 cartas +2 - duas de cada cor; 
► 8 cartas “Bloquear” - duas de cada cor; 
► 8 cartas “Inverter” - duas de cada cor; 
► 4 cartas “Coringa (Muda de cor)”; 
► 4 cartas +4
*/
#include "deck.h"

void Deck::generateDeck()
{
    cardVector.clear();
    
    for(int i = 0; i < 4; i++)
    {
        //generate card numbers
        Card card0(static_cast<Color>(i),Number0);
        cardVector.push_back(card0);

        for(int j = 1; j < 10; j++ )
        {
            Card cardNum(static_cast<Color>(i),Number0);
            cardVector.push_back(cardNum);
        }

        //+2
        Card card21(static_cast<Color>(i),More2);
        Card card22(static_cast<Color>(i),More2);
        cardVector.push_back(card21);
        cardVector.push_back(card22);

        //Block
        Card cardb1(static_cast<Color>(i),Block);
        Card cardb2(static_cast<Color>(i),Block);
        cardVector.push_back(cardb1);
        cardVector.push_back(cardb2);

        //Inverter
        Card cardi1(static_cast<Color>(i),Inverter);
        Card cardi2(static_cast<Color>(i),Inverter);
        cardVector.push_back(cardi1);
        cardVector.push_back(cardi2);

        //Change Color
        Card cardc1(static_cast<Color>(i),ChangeColor);
        cardVector.push_back(cardc1);

        //+4
        Card card42(static_cast<Color>(i),More4);
        cardVector.push_back(card42);

    }
    
    return;
}

Deck::Deck()
{

}


#endif