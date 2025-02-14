class Solution {
    public:
        bool check(vector<int>& nums) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[j] < nums[i])
        return false;
    }
  }

  return true;
}
};