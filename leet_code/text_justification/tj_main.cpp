#include <iostream>
#include <vector>
#include <string>
#include "tj_main.h"

using namespace std;

vector<string> Solution::fullJustify(vector<std::string> &words, int maxWidth) {
    vector<string> res;
    int c_min_size = 0;
    vector<string> c_words;
    for (string &word: words) {
        if (c_min_size + word.size() < maxWidth) {
            if (c_min_size > 0) {
                c_min_size += 1;
            }
            c_min_size += (int) word.size();
            c_words.push_back(word);
        } else {
            res.push_back(justifyLine(c_words, maxWidth));
            c_min_size = 0;
        }
        cout << word << endl;
    }
}

string justifyLine(vector<string> &words, int maxWidth) {
    int gaps = (int) words.size() - 1;
    int wa = maxWidth - gaps;
    int spa = wa / gaps;
    int spa_rem = wa % gaps;
    string res;
    for (int i = 0; i < gaps; i++) {
        res += words[i];
        res += string(spa, ' ');
        if (spa_rem > 0) {
            res += ' ';
            spa_rem--;
        }
    }
    res += words[gaps];
    return res;
}

int main() {
    cout << "c++ version: " << __cplusplus << endl;
    return 0;
}
