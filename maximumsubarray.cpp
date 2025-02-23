#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxi=INT_MIN;
            for(int i=0; i<nums.size();i++){
                for(int j=i; j<nums.size();j++){
                    int sum =0;
                    for(int k= i;k<j;k++){
                        sum+=nums[k];
                    }
                    maxi=max(sum,maxi);
                }
            }
            return maxi;
        }
    };