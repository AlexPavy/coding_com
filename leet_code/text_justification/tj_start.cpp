#include <vector>
#include <string>
#include "tj_start.h"
#include "tj_main.h"

using namespace std;

int main() {
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    Solution sol = Solution();
    auto res = sol.fullJustify(
            words,
            16
    );
    printText(res);
    return 0;
}
