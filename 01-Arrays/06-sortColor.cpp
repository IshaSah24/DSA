#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0, mid = 0;
        int high = arr.size() - 1;

        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 2) {
                swap(arr[mid], arr[high]);
                high--;
            }
            else if (arr[mid] == 1) {
                mid++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> colors = {2, 0, 2, 1, 1, 0};
    sol.sortColors(colors);

    for (int color : colors) {
        cout << color << " ";
    }
    cout << endl;
    return 0;
}
