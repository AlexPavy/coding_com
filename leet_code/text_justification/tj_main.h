#ifndef TJ_MAIN_H
#define TJ_MAIN_H

#include <string>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth);
};

string justifyLine(vector<string> &words, int maxWidth);

string justifyLastLine(vector<string> &words, int maxWidth);

void printText(vector<string> &words);

#endif
