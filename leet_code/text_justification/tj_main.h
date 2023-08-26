#ifndef MAIN_H
#define MAIN_H

#include <string>
using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth);
};

string justifyLine(vector<string> &words, int maxWidth);

string justifyLastLine(vector<string> &words, int maxWidth);

#endif
