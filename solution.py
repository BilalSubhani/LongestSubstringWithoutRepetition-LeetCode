class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        char_index_map = {}
        max_length = 0
        start_index = 0

        for end_index, char in enumerate(s):
            if char in char_index_map and char_index_map[char] >= start_index:
                start_index = char_index_map[char] + 1
        
            char_index_map[char] = end_index
            max_length = max(max_length, end_index - start_index + 1)

        return max_length
