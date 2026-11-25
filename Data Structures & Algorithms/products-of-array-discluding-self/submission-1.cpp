class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        //multiply all the numbers together
        //in a new vector push back that result / nums[i]
        int result = 1, zeroCount = 0;
        for(int& i : nums) {
            if (i != 0){
                result *= i;
            }
            else {
                zeroCount++;
            }
        }

        if(zeroCount > 1) {
            return vector<int>(nums.size(), 0);
        }

        for(int i = 0; i < nums.size(); ++i) {
            if(zeroCount > 0) {
                res[i] = nums[i] == 0 ? result : 0;
            }
            else {
            res[i] = result / nums[i];
            }
        }
        return res;
    }
};
