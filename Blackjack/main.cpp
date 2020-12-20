#include <iostream>
#include <string>
#include <array>
#include <random>
#include <algorithm>
#include <ctime>
using namespace std;
enum SUIT {
    HEART,
    SPADE,
    CLUB,
    DIAMOND
};
enum RANK {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

struct Card {
    SUIT suit;
    RANK rank;
};
string printCard(const Card &card) {
    string code ="";
    switch (card.rank) {
        case TWO:
            code += "2";
            break;
        case THREE:
            code += "3";
            break;
        case FOUR:
            code += "4";
            break;
        case FIVE:
            code += "5";
            break;
        case SIX:
            code += "6";
            break;
        case SEVEN:
            code += "7";
            break;
        case EIGHT:
            code += "8";
            break;
        case NINE:
            code += "9";
            break;
        case TEN:
            code += "10";
            break;
        case JACK:
            code += "J";
            break;
        case QUEEN:
            code += "Q";
            break;
        case KING:
            code += "K";
            break;
        case ACE:
            code += "A";
            break;
    }
    switch (card.suit) {
        case HEART:
            code += "H";
            break;
        case SPADE:
            code += "S";
            break;
        case DIAMOND:
            code += "D";
            break;
        case CLUB:
            code += "C";
            break;
    }

    return code;
}

std::array<Card, 52> createDeck() {
    std::array<Card, 52> deck;
    for(int i = 0; i < 52;) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 13; ++k) {
                deck[i].suit = static_cast<SUIT>(j);
                deck[i].rank = static_cast<RANK>(k);
                ++i;
            }
        }
    }
    return deck;
}

void printDeck(const std::array<Card, 52> &Deck) {
    for(auto card : Deck) {
        cout << printCard(card) << endl;
    }
}
void shuffleDeck(std::array<Card, 52> &Deck) {
    std::mt19937 mt{static_cast<std::mt19937::result_type>(std::time(nullptr))};
    std::shuffle(std::begin(Deck), std::end(Deck), mt);
}
int getCardValue(const Card &card) {
    switch (card.rank) {
        case TWO:
            return 2;
            break;
        case THREE:
            return 3;
            break;
        case FOUR:
            return 4;
            break;
        case FIVE:
            return 5;
            break;
        case SIX:
            return 6;
            break;
        case SEVEN:
            return 7;
            break;
        case EIGHT:
            return 8;
            break;
        case NINE:
            return 9;
            break;
        case TEN:
            return 10;
            break;
        case JACK:
            return 10;
            break;
        case QUEEN:
            return 10;
            break;
        case KING:
            return 10;
            break;
        case ACE:
            return 11;
            break;
        default:
            cout << "Invalid card!" << endl;
            return -1;
    }
}

bool playBlackjack(const std::array<Card, 52> deck) {
    //Player starts off with two cards from the shuffled deck, dealer one
    int playerScore = getCardValue(deck[0]) + getCardValue(deck[1]);
    int dealerScore = getCardValue(deck[2]);
    int cardCount = 3; //Keep track off position in deck thereafter
    bool playerBust = false; //Keeps track off if player busts
    char playerMove; //Holds player input on hit or stant
    cout << "Your starting hand: " << printCard(deck[0]) << " " << " " << printCard(deck[1]) << endl;
    cout << "Dealer starting hand:  " << printCard(deck[2]) << endl;
    //If the score is already 21 based off of initial cards dealt, blackjack and player win =
    if(playerScore == 21)
        return true;
    do {
        cout << "Enter a move! Press 'h' for hit or 's' for stand!:";
        cin >> playerMove;
        if(playerMove == 's') {
            break;
        }
        cout << printCard(deck[cardCount]) << endl;
        playerScore += getCardValue(deck[cardCount]);
        if(playerScore > 21) { //If the player score is higher than 21,
            return false;
        }
        cardCount++; //Increment count
    } while (playerMove != 's');
    //Eventually player will hit stand or bust, if hit stand dealer turn
    while(dealerScore < 17) {
        cout << printCard(deck[cardCount]) << endl;
        dealerScore += getCardValue(deck[cardCount]);
        if(dealerScore > 21) //If dealer goes over 21, the player wins.
            return true;
        cardCount++;
    }

    if(playerScore > dealerScore)
        return true;
    else
        return false;
}
int main() {
    std::array<Card, 52> deck = createDeck();
    shuffleDeck(deck);
    printDeck(deck);
    if(playBlackjack(deck)) {
        cout << "Player Won!" << endl;
    } else {
        cout << "Player Lost!" << endl;
    }
    return 0;
}
