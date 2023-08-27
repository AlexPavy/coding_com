#include "test_tj.h"
#include "tj_main.h"
#include <iostream>
#include <catch2/catch_test_macros.hpp>

using namespace std;

TEST_CASE("justify 1", "[justifyTest]") {
    vector<string> res = testFullJustify(
            {"This", "is", "an", "example", "of", "text", "justification."},
            16
    );
    REQUIRE(res[0] == "This    is    an");
    REQUIRE(res[1] == "example  of text");
    REQUIRE(res[2] == "justification.  ");
}

TEST_CASE("justify 2", "[justifyTest]") {
    vector<string> res = testFullJustify(
            {"What","must","be","acknowledgment","shall","be"},
            16
    );
    REQUIRE(res[0] == "What   must   be");
    REQUIRE(res[1] == "acknowledgment  ");
    REQUIRE(res[2] == "shall be        ");
}

vector<string> testFullJustify(vector<string> &&words, int maxWidth) {
    Solution sol = Solution();
    auto res = sol.fullJustify(words, maxWidth);
    for (string &line: res) {
        cout << line << endl;
        REQUIRE(line.size() == maxWidth);
    }
    return res;
}
