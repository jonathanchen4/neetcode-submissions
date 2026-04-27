class Solution {
public:
    int maxArea(vector<int>& heights) {
        //imbedded for loops?

        int greatest = 0;
        for (int i = 0; i < heights.size(); ++i) {
            for (int j = i + 1; j < heights.size(); ++j) {

                
                greatest = max(greatest, min(heights[i], heights[j]) * (j - i));
            }
        }
        return greatest;
    }
};
