#include "func.h"

std::string declareWinner(std::string Player_1, std::string Player_2, std::vector<Card> Player_1_cards, std::vector<Card> Player_2_cards)
{
    if(Player_1_cards[0].getValue() > Player_2_cards[0].getValue()) {
        return Player_1;
    } else {
        return Player_2;
    }
}
