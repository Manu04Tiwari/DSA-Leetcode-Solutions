#include<bits/stdc++.h>
using namespace std;

int Solve(int N, vector<int> A) {
    if (N == 0) return 0; 
    int closest = A[0];
    for (int i = 1; i < N; ++i) {
        if (abs(A[i]) < abs(closest) || (abs(A[i]) == abs(closest) && A[i] > closest)) {
            closest = A[i];
        }
    }
    return closest;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}