class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        max_alt = 0
        current_alt = 0
        for i in gain:
            current_alt += i
            max_alt = max(max_alt, current_alt)
        return max_alt