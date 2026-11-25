class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int greatest = 0;

        while (left < right) {
            int area = min(heights[left], heights[right]) * (right - left);
            greatest = max(greatest, area);

            if(heights[left] <= heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return greatest;
    }
};
