#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
    
            //transposing
            for(int i=0; i<n-1; i++){
                for(int j=i+1; j<n; j++){
                    swap(matrix[i][j],matrix[i][j]);
                }
            }
            //reversing
            for(int i=0; i<n; i++){
                reverse(matrix[i].begin(), matrix[i].end());
            }
        }
    };