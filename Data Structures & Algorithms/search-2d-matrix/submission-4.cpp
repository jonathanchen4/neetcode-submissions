class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int left = 0, right = ROWS * COLS - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / COLS, col = mid % COLS;

            if(matrix[row][col] == target) return true;
            if (target < matrix[row][col]) {
                right = mid - 1;
            }
            if (target > matrix[row][col]) {
                left = mid + 1;
            }
        }
        return false;
    }
};
