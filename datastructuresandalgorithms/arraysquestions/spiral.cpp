#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) return ans;  // Handle the empty matrix case

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // Index initialization
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while (count < total) {

            // Print starting row
            for (int index = startingcol; count < total && index <= endingcol; index++) {
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;

            // Print ending column
            for (int index = startingrow; count < total && index <= endingrow; index++) {
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;

            // Print ending row
            for (int index = endingcol; count < total && index >= startingcol; index--) {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;

            // Print starting column
            for (int index = endingrow; count < total && index >= startingrow; index--) {
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }
};

int main() {
    // Initialize a 2D vector
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
