#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            vector <int> temp;
            int nz = 0;
            for(int i=0; i<nums.size();i++){
                if (nums[i]!=0){
                    temp.push_back(nums[i]);
                }
            }
            for(int i=0;i<temp.size();i++){
                nums[i]=temp[i];
            }
            for(int i=nz; i<nums.size(); i++){
                nums[i]=0;
            }
        }
    };

