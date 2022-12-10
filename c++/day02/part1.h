#pragma once

#include <string>
#include <utility>    // std::pair
#include <vector>

namespace Day02 {

    enum class Move_t {
        ROCK     = 0,
        PAPER    = 1,
        SCISSORS = 2
    };

    inline int val(const Move_t move) { return static_cast<int>(move); }

    using Strategy = std::pair<Move_t, Move_t>;
    
    int solve(const std::vector<Strategy>& input);

    namespace Part1 {
        std::vector<Strategy> parse(const std::string& filename);
    }
}
