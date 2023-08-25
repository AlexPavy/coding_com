#include "test_tj.h"
#include "tj_main.h"

#include <catch2/catch_test_macros.hpp>
#include <tuple>

using namespace std;

TEST_CASE("play 1", "[playTest]") {
    auto [height, nbFullRows] = playTest("Q0");
    REQUIRE(height == 2);
    REQUIRE(nbFullRows == 0);
}

tuple<int, int> playFullJustify(const string &input) {
    State state = State();
    vector<string> moves;

    stringstream ss(input);

    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        moves.push_back(substr);
    }
    play(state, moves);
    return make_tuple(state.getMaxHeight(), state.getNbFullRows());
}
