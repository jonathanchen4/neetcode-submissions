class Solution {
public:
    int maxArea(vector<int>& heights) {
        //imbedded for loops?

        int greatest = 0;
        int height = 0;
        for (int i = 0; i < heights.size(); ++i) {
            for (int j = i + 1; j < heights.size(); ++j) {
                height = min(heights[i], heights[j]);
                int temp = height * (j - i);
                
                greatest = max(greatest, temp);
            }
        }
        return greatest;
    }
};
