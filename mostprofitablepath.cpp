#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = amount.size();
        vector<vector<int>> adj(n);
        
        for (auto& e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> bobDist(n, -1);
        queue<int> q;
        q.push(bob);
        bobDist[bob] = 0;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int neighbor : adj[node]) {
                if (bobDist[neighbor] == -1) {
                    bobDist[neighbor] = bobDist[node] + 1;
                    q.push(neighbor);
                }
            }
        }
        
        int maxProfit = INT_MIN;
        function<void(int, int, int, int)> dfs = [&](int node, int parent, int aliceDist, int profit) {
            if (bobDist[node] != -1 && bobDist[node] < aliceDist) {
                profit += 0;
            } else if (bobDist[node] == aliceDist) {
                profit += amount[node] / 2;
            } else {
                profit += amount[node];
            }
            
            bool isLeaf = true;
            for (int neighbor : adj[node]) {
                if (neighbor != parent) {
                    isLeaf = false;
                    dfs(neighbor, node, aliceDist + 1, profit);
                }
            }
            
            if (isLeaf) {
                maxProfit = max(maxProfit, profit);
            }
        };
        
        dfs(0, -1, 0, 0);
        return maxProfit;
    }
};