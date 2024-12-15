//
// Created by peter on 15/12/2024.
//

#include "magic_numbers.h"
#include <random>
#include <fmt/base.h>

namespace Constants::Impl {

    MagicNumber magic_candidate(const Bitboard occupation) {
        static std::mt19937_64 rng;

        MagicNumber res;

        // make sure that the random number is not too small.
        do {
            res = rng() & rng() & rng();
        } while (Bitcount(occupation * res & 0xFF00000000000000) < 6);

        return res;
    }

    void compute_magic_numbers() {
        // loop over all 64 board squares
        fmt::print("// rooks:\n");
        for (const auto square: All_Positions) {
            const MagicNumber m = find_magic_number<false>(square);
            fmt::print("/* magic number found for {}: */", print_position(square));
            fmt::print(" 0x{0:x},\n", m);
        }
        fmt::print("\n");
        fmt::print("// bishops:\n");
        for (const auto square: All_Positions) {
            const MagicNumber m = find_magic_number<true>(square);
            fmt::print("/* magic number found for {}: */", print_position(square));
            fmt::print(" 0x{0:x},\n", m);
        }
    }
}