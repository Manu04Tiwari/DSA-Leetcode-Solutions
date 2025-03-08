#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            unordered_set<int> seen;
            int repeated = -1, missing = -1;
            int n = grid.size() * grid[0].size();
            vector<bool> present(n + 1, false);

            for (const auto& row : grid) {
                for (int num : row) {
                    if (seen.count(num)) {
                        repeated = num;
                    } else {
                        seen.insert(num);
                        present[num] = true;
                    }
                }
            }

            for (int i = 1; i <= n; ++i) {
                if (!present[i]) {
                    missing = i;
                    break;
                }
            }

            return {missing, repeated};
        }
};