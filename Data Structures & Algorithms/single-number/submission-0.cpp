class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //index through and see if it matches with another int
        //cant be using imbedded for loops, maybe 2 pointer but i dont know how that would work tbh
        //sort the set then compare it to the one in front of it, if not equal return the num, 
        // 1,1,2,2,3,3,4,5,5
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size() - 1) {
            if (nums[i] == nums[i + 1]) {
                i += 2;
            }
            else {
                return nums[i];
            }
        }
        return nums[i];
    }
};
