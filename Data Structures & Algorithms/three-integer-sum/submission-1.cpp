class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> temp;
        for(int& num : nums) {
            temp[num]++;
        }

        vector<vector<int>> result;
        for(int i = 0; i < nums.size(); ++i) {
            temp[nums[i]]--;
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j = i + 1; j < nums.size(); ++j) {
                temp[nums[j]]--;
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;

                int target = -(nums[i] + nums[j]);
                if(temp[target] > 0) {
                    result.push_back({nums[i], nums[j], target});
                }
            }
            for(int j = i + 1; j < nums.size(); ++j) {
                temp[nums[j]]++;
            }
        }
        return result;
    }
};
