#include <vector>
#include <unordered_set>
#include <unordered_map> // added header for unordered_map

using namespace std;
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int count = 0, sum = 0;
            unordered_map<int, int> prefix;
            prefix[0] = 1;
            for (int num : nums) {
                sum += num;
                if(prefix.find(sum - k) != prefix.end())
                    count += prefix[sum - k];
                prefix[sum]++;
            }
            return count;
        }
};