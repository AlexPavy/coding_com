#include "test_tj.h"
#include "tj_main.h"

#include <catch2/catch_test_macros.hpp>
#include <tuple>

using namespace std;

TEST_CASE("justify 1", "[justifyTest]") {
    auto [height, nbFullRows] = testFullJustify("Q0");
    REQUIRE(height == 2);
    REQUIRE(nbFullRows == 0);
}

tuple<int, int> testFullJustify(const string &input) {
    Solution sol = Solution();
    sol.fullJustify();
}
