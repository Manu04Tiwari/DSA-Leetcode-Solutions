class Solution(object):
    def findMaxAverage(self, nums, k):
      
        max_sum = sum(nums[:k])
        current_sum = max_sum
        for i in range(k, len(nums)):
            current_sum += nums[i] - nums[i - k]
            max_sum = max(max_sum, current_sum)
        return max_sum / k