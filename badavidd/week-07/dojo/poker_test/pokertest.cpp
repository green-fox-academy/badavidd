#include <gtest/gtest.h>
#include "func.h"


TEST(poker_test, test_player_1_wins_with_high_card_1v1){
    Card card1(Color::C, Value::Val_A);
    Card card2(Color::D, Value::Val_K);
    EXPECT_EQ("David", declareWinner("David", "Brigi", {card1}, {card2}));
}

TEST(poker_test, test_player_2_wins_with_high_card_1v1) {
    Card card1(Color::C, Value::Val_10);
    Card card2(Color::D, Value::Val_A);
    EXPECT_EQ("Brigi", declareWinner("David", "Brigi", {card1}, {card2}));
}

TEST(poker_test, test_player_1_wins_with_high_card_2v2) {
    Card card1(Color::C, Value::Val_8);
    Card card2(Color::D, Value::Val_9);
    Card card3(Color::D, Value::Val_A);
    Card card4(Color::D, Value::Val_K);
    EXPECT_EQ("David", declareWinner("David", "Brigi", {card1, card3}, {card2, card4}));
}