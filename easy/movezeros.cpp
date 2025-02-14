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

    
    class Solution {
        public:
            void moveZeroes(vector<int>& nums) {
                int lastNonZeroFoundAt = 0; // Initialize the position for the last non-zero element
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] != 0) {
                        swap(nums[lastNonZeroFoundAt++], nums[i]); // Swap the current element with the last non-zero element
                    }
                }
            }
    };