#include <iostream>
#include <vector>
#include <algorithm> // Include algorithm for sort

using namespace std;
class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int n=nums.size();
            for(int i=0; i<n; i++){
                for(int j=i; j<n; j++){
                    int prod=1;
                for(int k=i; k<j; k++){
                prod=prod*nums[k];
            }
            }
            int maxi=1;
              maxi=max(maxi,prod);
            }
           
         return maxi;   
        }
    };