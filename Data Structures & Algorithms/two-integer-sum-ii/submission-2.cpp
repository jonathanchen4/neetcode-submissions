class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> temp;
        
        for(int i = 0; i < numbers.size(); ++i) {
            int diff = target - numbers[i];
            if(temp.find(diff) != temp.end()) {
                return {temp[diff], i + 1};
            }
            temp[numbers[i]] = i + 1;
        }
        return {};
    }
};
