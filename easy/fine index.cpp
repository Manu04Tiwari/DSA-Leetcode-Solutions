#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int strStr(string haystack, string needle) {
            if (needle.empty()) return 0;
            int h_len = haystack.length();
            int n_len = needle.length();
            for (int i = 0; i <= h_len - n_len; ++i) {
                if (haystack.substr(i, n_len) == needle) {
                    return i;
                }
            }
            return -1;
        }
    };