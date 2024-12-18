//
// Created by peter on 01/12/2024.
//

#ifndef KING_ATTACKS_H
#define KING_ATTACKS_H

#include <array>

#include "bitboard.h"

namespace Constants {
    /**
     * @brief Lookup table for king attack bitboards on a chessboard.
     *
     * This static constexpr array contains precomputed bitboards that
     * represent all possible attack patterns of a king on a standard
     * 8x8 chessboard. Each index of the array corresponds to a square
     * on the chessboard (0 for A1, 1 for B1, ..., 63 for H8).
     *
     * The bitboard is encoded as a 64-bit unsigned integer (Bitboard),
     * where each bit represents a square on the chessboard. A bit value
     * of 1 indicates that the king can attack that square from the
     * current position.
     *
     * The array is indexed with a number corresponding to a specific
     * square on the chessboard using a 0-based index starting from the
     * lower-left corner (A1). Each value is the bitboard representation
     * of the squares the king can attack from the square at that index.
     *
     * Usage of this table allows quick computation of a king's attack
     * pattern without recalculating it dynamically.
     */
    static constexpr std::array<Bitboard, 64> king_attacks = {
        /*
            A  B  C  D  E  F  G  H
        1   0  1  0  0  0  0  0  0
        2   1  1  0  0  0  0  0  0
        3   0  0  0  0  0  0  0  0
        4   0  0  0  0  0  0  0  0
        5   0  0  0  0  0  0  0  0
        6   0  0  0  0  0  0  0  0
        7   0  0  0  0  0  0  0  0
        8   0  0  0  0  0  0  0  0

           bitboard as 64 bit integer: */
        770ULL,
 /*
         A  B  C  D  E  F  G  H
     1   1  0  1  0  0  0  0  0
     2   1  1  1  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        1797ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  1  0  1  0  0  0  0
     2   0  1  1  1  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3594ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  1  0  1  0  0  0
     2   0  0  1  1  1  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        7188ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  1  0  1  0  0
     2   0  0  0  1  1  1  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        14376ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  1  0  1  0
     2   0  0  0  0  1  1  1  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        28752ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  1  0  1
     2   0  0  0  0  0  1  1  1
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        57504ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  1  0
     2   0  0  0  0  0  0  1  1
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        49216ULL,
 /*
         A  B  C  D  E  F  G  H
     1   1  1  0  0  0  0  0  0
     2   0  1  0  0  0  0  0  0
     3   1  1  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        197123ULL,
 /*
         A  B  C  D  E  F  G  H
     1   1  1  1  0  0  0  0  0
     2   1  0  1  0  0  0  0  0
     3   1  1  1  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        460039ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  1  1  1  0  0  0  0
     2   0  1  0  1  0  0  0  0
     3   0  1  1  1  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        920078ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  1  1  1  0  0  0
     2   0  0  1  0  1  0  0  0
     3   0  0  1  1  1  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        1840156ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  1  1  1  0  0
     2   0  0  0  1  0  1  0  0
     3   0  0  0  1  1  1  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3680312ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  1  1  1  0
     2   0  0  0  0  1  0  1  0
     3   0  0  0  0  1  1  1  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        7360624ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  1  1  1
     2   0  0  0  0  0  1  0  1
     3   0  0  0  0  0  1  1  1
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        14721248ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  1  1
     2   0  0  0  0  0  0  1  0
     3   0  0  0  0  0  0  1  1
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        12599488ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   1  1  0  0  0  0  0  0
     3   0  1  0  0  0  0  0  0
     4   1  1  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        50463488ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   1  1  1  0  0  0  0  0
     3   1  0  1  0  0  0  0  0
     4   1  1  1  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        117769984ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  1  1  1  0  0  0  0
     3   0  1  0  1  0  0  0  0
     4   0  1  1  1  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        235539968ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  1  1  1  0  0  0
     3   0  0  1  0  1  0  0  0
     4   0  0  1  1  1  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        471079936ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  1  1  1  0  0
     3   0  0  0  1  0  1  0  0
     4   0  0  0  1  1  1  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        942159872ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  1  1  1  0
     3   0  0  0  0  1  0  1  0
     4   0  0  0  0  1  1  1  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        1884319744ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  1  1  1
     3   0  0  0  0  0  1  0  1
     4   0  0  0  0  0  1  1  1
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3768639488ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  1  1
     3   0  0  0  0  0  0  1  0
     4   0  0  0  0  0  0  1  1
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3225468928ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   1  1  0  0  0  0  0  0
     4   0  1  0  0  0  0  0  0
     5   1  1  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        12918652928ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   1  1  1  0  0  0  0  0
     4   1  0  1  0  0  0  0  0
     5   1  1  1  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        30149115904ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  1  1  1  0  0  0  0
     4   0  1  0  1  0  0  0  0
     5   0  1  1  1  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        60298231808ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  1  1  1  0  0  0
     4   0  0  1  0  1  0  0  0
     5   0  0  1  1  1  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        120596463616ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  1  1  1  0  0
     4   0  0  0  1  0  1  0  0
     5   0  0  0  1  1  1  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        241192927232ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  1  1  1  0
     4   0  0  0  0  1  0  1  0
     5   0  0  0  0  1  1  1  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        482385854464ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  1  1  1
     4   0  0  0  0  0  1  0  1
     5   0  0  0  0  0  1  1  1
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        964771708928ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  1  1
     4   0  0  0  0  0  0  1  0
     5   0  0  0  0  0  0  1  1
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        825720045568ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   1  1  0  0  0  0  0  0
     5   0  1  0  0  0  0  0  0
     6   1  1  0  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3307175149568ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   1  1  1  0  0  0  0  0
     5   1  0  1  0  0  0  0  0
     6   1  1  1  0  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        7718173671424ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  1  1  1  0  0  0  0
     5   0  1  0  1  0  0  0  0
     6   0  1  1  1  0  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        15436347342848ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  1  1  1  0  0  0
     5   0  0  1  0  1  0  0  0
     6   0  0  1  1  1  0  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        30872694685696ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  1  1  1  0  0
     5   0  0  0  1  0  1  0  0
     6   0  0  0  1  1  1  0  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        61745389371392ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  1  1  1  0
     5   0  0  0  0  1  0  1  0
     6   0  0  0  0  1  1  1  0
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        123490778742784ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  1  1  1
     5   0  0  0  0  0  1  0  1
     6   0  0  0  0  0  1  1  1
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        246981557485568ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  1  1
     5   0  0  0  0  0  0  1  0
     6   0  0  0  0  0  0  1  1
     7   0  0  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        211384331665408ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   1  1  0  0  0  0  0  0
     6   0  1  0  0  0  0  0  0
     7   1  1  0  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        846636838289408ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   1  1  1  0  0  0  0  0
     6   1  0  1  0  0  0  0  0
     7   1  1  1  0  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        1975852459884544ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  1  1  1  0  0  0  0
     6   0  1  0  1  0  0  0  0
     7   0  1  1  1  0  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        3951704919769088ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  1  1  1  0  0  0
     6   0  0  1  0  1  0  0  0
     7   0  0  1  1  1  0  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        7903409839538176ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  1  1  1  0  0
     6   0  0  0  1  0  1  0  0
     7   0  0  0  1  1  1  0  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        15806819679076352ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  1  1  1  0
     6   0  0  0  0  1  0  1  0
     7   0  0  0  0  1  1  1  0
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        31613639358152704ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  1  1  1
     6   0  0  0  0  0  1  0  1
     7   0  0  0  0  0  1  1  1
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        63227278716305408ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  1  1
     6   0  0  0  0  0  0  1  0
     7   0  0  0  0  0  0  1  1
     8   0  0  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        54114388906344448ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   1  1  0  0  0  0  0  0
     7   0  1  0  0  0  0  0  0
     8   1  1  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        216739030602088448ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   1  1  1  0  0  0  0  0
     7   1  0  1  0  0  0  0  0
     8   1  1  1  0  0  0  0  0

        bitboard as 64 bit integer: */
        505818229730443264ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  1  1  1  0  0  0  0
     7   0  1  0  1  0  0  0  0
     8   0  1  1  1  0  0  0  0

        bitboard as 64 bit integer: */
        1011636459460886528ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  1  1  1  0  0  0
     7   0  0  1  0  1  0  0  0
     8   0  0  1  1  1  0  0  0

        bitboard as 64 bit integer: */
        2023272918921773056ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  1  1  1  0  0
     7   0  0  0  1  0  1  0  0
     8   0  0  0  1  1  1  0  0

        bitboard as 64 bit integer: */
        4046545837843546112ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  1  1  1  0
     7   0  0  0  0  1  0  1  0
     8   0  0  0  0  1  1  1  0

        bitboard as 64 bit integer: */
        8093091675687092224ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  1  1  1
     7   0  0  0  0  0  1  0  1
     8   0  0  0  0  0  1  1  1

        bitboard as 64 bit integer: */
        16186183351374184448ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  1  1
     7   0  0  0  0  0  0  1  0
     8   0  0  0  0  0  0  1  1

        bitboard as 64 bit integer: */
        13853283560024178688ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   1  1  0  0  0  0  0  0
     8   0  1  0  0  0  0  0  0

        bitboard as 64 bit integer: */
        144959613005987840ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   1  1  1  0  0  0  0  0
     8   1  0  1  0  0  0  0  0

        bitboard as 64 bit integer: */
        362258295026614272ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  1  1  1  0  0  0  0
     8   0  1  0  1  0  0  0  0

        bitboard as 64 bit integer: */
        724516590053228544ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  1  1  1  0  0  0
     8   0  0  1  0  1  0  0  0

        bitboard as 64 bit integer: */
        1449033180106457088ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  1  1  1  0  0
     8   0  0  0  1  0  1  0  0

        bitboard as 64 bit integer: */
        2898066360212914176ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  1  1  1  0
     8   0  0  0  0  1  0  1  0

        bitboard as 64 bit integer: */
        5796132720425828352ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  1  1  1
     8   0  0  0  0  0  1  0  1

        bitboard as 64 bit integer: */
        11592265440851656704ULL,
 /*
         A  B  C  D  E  F  G  H
     1   0  0  0  0  0  0  0  0
     2   0  0  0  0  0  0  0  0
     3   0  0  0  0  0  0  0  0
     4   0  0  0  0  0  0  0  0
     5   0  0  0  0  0  0  0  0
     6   0  0  0  0  0  0  0  0
     7   0  0  0  0  0  0  1  1
     8   0  0  0  0  0  0  1  0

        bitboard as 64 bit integer: */
        4665729213955833856ULL
 };
}
#endif  //KING_ATTACKS_H
