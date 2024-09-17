#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int i = 0, j = col-1;
        while (i < rows && j >= 0){
            if (matrix[i][j] == target){
                return true;
            } else if (matrix[i][j] < target){
                i++;
            } else {
                j--;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    bool result = sol.searchMatrix(matrix, target);

    if (result) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
