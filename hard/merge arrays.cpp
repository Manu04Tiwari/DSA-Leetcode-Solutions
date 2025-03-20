#include <iostream>
#include <vector>
#include <algorithm> // Include algorithm for sort

using namespace std;
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           long long arr3[n+m];
           int left=0;
           int right =0;
           while(left<n && right<m){
            if(nums1[left]<=nums2[right]){
                arr3[index]=nums1[left];
                left++, index++;
            }
            else{
                arr3[index]=nums2[right];
                right++,index++;
            }
           }
           while(left<n){
            arr3[index++]=nums2[left++];
           }
           while(right<m){
            arr3[index++]=nums2[right++];
           }
           for (int i=0;i<n;i++){
            if(i<n){
                nums1[i]=arr3[i];
            }
            else{
                nums2[i-n]=arr3[i];
            }
           }
           return arr3;
        }
    };