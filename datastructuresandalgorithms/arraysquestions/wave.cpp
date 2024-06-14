//Wave Print question

#include <iostream>
#include <vector>
using namespace std;

vector<int> waveprint(const vector<vector<int>>& arr, int nrows, int mcols) {
    vector<int> ans;
    for (int col = 0; col < mcols; col++) {
        if (col & 1) {
            // Odd index column -> Bottom to top
            for (int row = nrows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // Even index column -> Top to bottom
            for (int row = 0; row < nrows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
    // Initialize a 2D vector
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int nrows = arr.size();
    int mcols = arr[0].size();

    vector<int> result = waveprint(arr, nrows, mcols);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
