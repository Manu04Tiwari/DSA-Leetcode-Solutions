#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
                int n = nums.size();
                vector<vector<int>> ans;
                sort(nums.begin(), nums.end()); // Ensure the array is sorted
                for(int i=0; i<n; i++){
                    if(i>0 && nums[i]==nums[i-1]) continue;
                    for(int j=i+1; j<n; j++){ // Fix the loop condition
                        if(j>i+1 && nums[j]==nums[j-1]) continue; // Fix the duplicate check
                        int k= j+1;
                        int l= n-1;
                        while(k<l){
                            long long sum= nums[i];
                            sum+= nums[j];
                            sum+= nums[k];
                            sum+= nums[l];
                            if(sum==target){
                                vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                                ans.push_back(temp);
                                k++;
                                l--;
                                while(k<l && nums[k]== nums[k-1]) k++; // Fix the duplicate check
                                while(k<l && nums[l]== nums[l+1]) l--; // Fix the duplicate check
                            }
                            else if (sum<target){
                                k++;
                            }
                            else{
                                l--;
                            }
                        }
                    }
                }
                return ans;
            }
    };