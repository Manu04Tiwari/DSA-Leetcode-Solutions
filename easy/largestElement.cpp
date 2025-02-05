#include <iostream>
#include <Bits/stdc++.h>
#include <vector>
using namespace std;

int largestElement(vector<int>& arr, int n) {
    int largest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {1, 2, 3, 6, 5, 8};
    int largest = largestElement(arr, arr.size());
    cout << "The largest element is: " << largest << endl;
    return 0;
}