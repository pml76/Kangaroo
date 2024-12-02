//
// Created by peter on 02/12/2024.
//


#include "catch2/catch_test_macros.hpp"

#include "../include/bitboard.h"
#include "../include/knight_attacks.h"

Bitboard create_knight_attacks(Position position) {
    Bitboard attacks = 0ULL;
    Bitboard bitboard = set_bit(0ULL, position);

    // generate knight attacks
    attacks |= bitboard >> 17 & not_h_file;
    attacks |= bitboard >> 15 & not_a_file;
    attacks |= bitboard >> 6 & not_ab_file;
    attacks |= bitboard >> 10 & not_gh_file;

    attacks |= bitboard << 17 & not_a_file;
    attacks |= bitboard << 15 & not_h_file;
    attacks |= bitboard << 6 & not_gh_file;
    attacks |= bitboard << 10 & not_ab_file;
    return attacks;
}

TEST_CASE("Knight Attacks", "[knight_attacks]") {
    for (Position position : All_Positions) {
        const Bitboard attacks = create_knight_attacks(position);
        REQUIRE(knight_attacks[position] == attacks);
    }
}

