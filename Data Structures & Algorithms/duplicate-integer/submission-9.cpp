class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dup;
        for(int i : nums) {
            if(dup[i] == 0) {
                dup[i]++;
            }
            else {
                return true;
            }
        }
        return false;
    }
};