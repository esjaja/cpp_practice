#include<iostream>
using namespace std;
enum Suit{
    Diamonds = 0,
    Hearts,
    Clubs,
    Spades,
    suitEnd
};

enum Number{
    one,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    J,
    Q,
    K,
    numberEnd
};
 
struct Card{
    Suit suit;
    Number number;
};

class Poker{
    public:
        Poker();
        Card pickCard(int index);

    private:
        Card cards[52];
};

Poker::Poker() {
    for(int suit = 0; suit < Suit::suitEnd; suit++) {
        for(int num = 0; num < Number::numberEnd; num++) {
            cards[suit * Suit::suitEnd + num].suit = (Suit) suit;
            cards[suit * Suit::suitEnd + num].number = (Number) num;
        }
    }
}

Card Poker::pickCard(int index) {
    if(index > 52 || index < 0) {
        cerr << "Error: card index" << endl;
        exit(-1);
    }

    return cards[index];
}


void cardPattern(Card card) {
    Suit suit = card.suit;
    switch(suit) {
        case Suit::Diamonds:
            cout << "Diamonds" << endl;
            break;
        case Suit::Hearts:
            cout << "Hearts" << endl;
            break;
        case Suit::Clubs:
            cout << "Clubs" << endl;
            break;
        case Suit::Spades:
            cout << "Spades" << endl;
            break;
    }
}

int main() {
    Poker card_1;
    Card c = card_1.pickCard(1);
    cardPattern(c);
    printf("sizeof: Poker = %d, struct Card = %d, enum Suit = %d, enum Number = %d\n", sizeof(Poker), sizeof(Card), sizeof(Suit), sizeof(Number));
}