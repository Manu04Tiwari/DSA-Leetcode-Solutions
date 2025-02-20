#include <iostream>
#include <string>
#include <map>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
          
            map<char, int> roman;
            roman['I'] = 1;
            roman['V'] = 5;
            roman['X'] = 10;
            roman['L'] = 50;
            roman['C'] = 100;
            roman['D'] = 500;
            roman['M'] = 1000;
            
            int result = 0;
            for (int i = 0; i < s.size(); i++) {
                if (i > 0 && roman[s[i]] > roman[s[i - 1]]) {
                    result += roman[s[i]] - 2 * roman[s[i - 1]];
                } else {
                    result += roman[s[i]];
                }
            }
            return result;
        }
    };