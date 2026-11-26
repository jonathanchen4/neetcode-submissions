class Solution {
public:
    int findMin(vector<int> &nums) {
        //if first value is greater than last value, go right
        //if first value is less than last value, return first value
        int l = 0, r = nums.size() - 1;
        int res = nums[0];
        if (nums[0] < nums[nums.size() - 1]) return nums[l];

        while(l <= r) {
            if(nums[l] < nums[r]) {
                res = min(res, nums[l]);
                break;
            }
            int mid = l + (r - l) / 2;
            res = min(res, nums[mid]);
             // [4, 5, 6, 1, 2, 3]
             if (nums[mid] >= nums[l]) {
                l = mid + 1;
             }
             else { 
                r = mid - 1;
             }//l = 3, r = 5, mid = 4
        }
        return res;
    }
};
