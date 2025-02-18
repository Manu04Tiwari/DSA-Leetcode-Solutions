class Solution:
    def smallestNumber(self, pattern: str) -> str:
        if not pattern:
            return ''
        n = len(pattern)
        num = 1
        while True:
            if str(num) == str(num)[::-1]:
                if self.match(num, pattern):
                    return str(num)
            num += 1
        return ''

    def match(self, num: int, pattern: str) -> bool:
        num_str = str(num)
        if len(num_str) != len(pattern) + 1:
            return False
        for i in range(len(pattern)):
            if pattern[i] == 'I' and num_str[i] >= num_str[i + 1]:
                return False
            if pattern[i] == 'D' and num_str[i] <= num_str[i + 1]:
                return False
        return True