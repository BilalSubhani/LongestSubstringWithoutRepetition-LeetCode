class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndexMap;
    int maxLength = 0, startIndex = 0;

    for (int endIndex = 0; endIndex < s.size(); ++endIndex) {
        if (charIndexMap.find(s[endIndex]) != charIndexMap.end() && charIndexMap[s[endIndex]] >= startIndex) {
            startIndex = charIndexMap[s[endIndex]] + 1;
        }
        charIndexMap[s[endIndex]] = endIndex;
        maxLength = max(maxLength, endIndex - startIndex + 1);
    }

    return maxLength;
    }
};
