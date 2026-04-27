class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> result;
        int l = 0;
        int res = 0;

        for (int r = 0; r < s.length(); ++r) {
            while(result.find(s[r]) != result.end()) {
                result.erase(s[l]);
                ++l;
            }
            result.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};
