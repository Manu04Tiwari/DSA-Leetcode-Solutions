#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> happyStrings;
        generateHappyStrings("", n, happyStrings);
        if (k > happyStrings.size()) {
            return "";
        }
        return happyStrings[k - 1];
    }

private:
    void generateHappyStrings(string current, int n, vector<string>& happyStrings) {
        if (current.length() == n) {
            happyStrings.push_back(current);
            return;
        }
        for (char c : {'a', 'b', 'c'}) {
            if (current.empty() || current.back() != c) {
                generateHappyStrings(current + c, n, happyStrings);
            }
        }
    }
};