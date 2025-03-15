#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> majorityElement(vector<int>& nums) {
            vector<int> result;
            map<int, int> countMap;
            int threshold = nums.size() / 3;
            for (int num : nums) {
                countMap[num]++;
            }
            for (const auto& entry : countMap) {
                if (entry.second > threshold) {
                    result.push_back(entry.first);
                }
            }
            return result;
        }
};
