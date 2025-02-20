#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums.size();
            for (int i = 0; i < (1 << n); i++) {
                string s = "";
                for (int j = 0; j < n; j++) {
                    s += (i & (1 << j)) ? '1' : '0';
                }
                if (find(nums.begin(), nums.end(), s) == nums.end()) {
                    return s;
                }
            }
            return "";
        }
    };
