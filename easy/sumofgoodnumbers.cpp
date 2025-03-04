#include <vector>
#include <iostream>
using namespace std;
class Solution {
    public:
        int sumOfGoodNumbers(vector<int>& nums, int k) {
            
            int sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] % k == 0 || nums[i] % 10 == k) {
                    sum += nums[i];
                }
            }
            return sum;
        }
    };