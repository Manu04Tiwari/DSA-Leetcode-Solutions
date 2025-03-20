#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

class Solution {
    public:
        long long repairCars(vector<int>& ranks, int cars) {
            long long left = 0, right = INT_MAX;
        
            while(left < right) {
                long long mid = left + (right - left)/2;
                long long repair = 0;
    
                for (auto i : ranks) repair += (long long)sqrt(mid / i);
            
                if(repair < cars) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            return left;
        }
};