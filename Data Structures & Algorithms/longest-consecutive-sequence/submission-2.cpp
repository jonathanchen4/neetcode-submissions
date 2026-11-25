class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> temp(nums.begin(), nums.end());

        for(int& i : nums) {
            if(temp.find(i - 1) == temp.end()) {
                int length = 1;
                while(temp.find(i + length) != temp.end()) {
                    length++;
                }
                longest = max(longest, length);

            }
        }
        return longest;
    }
};
