class Solution {
public:
    int maxArea(vector<int>& heights) {
        //imbedded for loops?

        int greatest = 0;
        int height = 0;
        for (int i = 0; i < heights.size(); ++i) {
            for (int j = i + 1; j < heights.size(); ++j) {
                if (heights[i] != heights[j]) {
                    if (heights[i] > heights[j]) {
                        height = heights[i] - (heights[i] - heights[j]);
                    }
                    else {
                        height = heights[j] - (heights[j] - heights[i]);
                    }
                }
                else {
                    height = heights[i];
                }
                int temp = height * (j - i);

                greatest = max(greatest, temp);
            }
        }
        return greatest;
    }
};
