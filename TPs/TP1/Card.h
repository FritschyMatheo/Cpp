#ifndef CARD_H
#define CARD_H
#include <string>

class Card {
    protected:
        std::string cardName;
    public:
        Card(){};
        Card(std::string cardName){};
        virtual ~Card() = default;
        virtual void displayInfo()=0;
};

#endif