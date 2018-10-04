#ifndef CARD_H
#define CARD_H

enum Color { red, green, blue, yellow };
enum CardType { Number0, Number1, Number2, Number3, Number4, Number5, Number6, Number7, Number8, Number9, More2, More4, Inverter, Block, ChangeColor };

class Card
{
    public:
        Color color;
        CardType cardType;
        Card(Color c, CardType card);
};

#endif