#include "test_tj.h"
#include "tj_main.h"

#include <catch2/catch_test_macros.hpp>

using namespace std;

TEST_CASE("justify 1", "[justifyTest]") {
    vector<string> res = testFullJustify(
            {"This", "is", "an", "example", "of", "text", "justification."},
            16
    );
    REQUIRE(res[0] == "hi");
    REQUIRE(res[1] == "ok");
}

vector<string> testFullJustify(vector<string> &&words, int maxWidth) {
    Solution sol = Solution();
    return sol.fullJustify(words, maxWidth);
}
