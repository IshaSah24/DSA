#include <bits/stdc++.h>
using namespace std;

deque<int> solve(vector<int>& nums, int k) {
    deque<int> res;     
    deque<int> helper;   

    int i = 0, j = 0;

    while (j < nums.size()) {
       
        if (nums[j] < 0) {
            helper.push_back(nums[j]);
        }

        // if window size < k, just expand
        if (j - i + 1 < k) {
            j++;
        }
        
        else if (j - i + 1 == k) {
            if (helper.empty()) {
                res.push_back(0);
            } else {
                res.push_back(helper.front());
            }

            if (!helper.empty() && helper.front() == nums[i]) {
                helper.pop_front();
            }

            i++;
            j++;
        }
    }

    return res;
}

int main() {
    vector<int> arr = {1, -2, 3, 5, -7, 7, 8, -4, 2};
    int k = 3;

    deque<int> ans = solve(arr, k);

    for (int num : ans) {
        cout << num << " ";
    }
    return 0;
}
