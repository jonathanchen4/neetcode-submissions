class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;

        for(int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (temp.find(diff) != temp.end()) {
                return {temp[diff], i};
            }
            temp.insert({nums[i], i});
        }
        return {};
    }
};
