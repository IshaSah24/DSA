#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> result;

void twoSum(vector<int> &nums, int target, int start, int end) {
    int l = start;
    int r = end;
    while (l < r) {
        int sum = nums[l] + nums[r];

        if (sum > target) {
            --r;
        } else if (sum < target) {
            ++l;
        } else {
            result.push_back({-target, nums[l], nums[r]});

         
            while (l < r && nums[l] == nums[l + 1]) ++l;
            while (l < r && nums[r] == nums[r - 1]) --r;


            ++l;
            --r;
        }
    }
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    int n = (int)nums.size();

    for (int i = 0; i < n - 2; ++i) {         
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int target = -nums[i];                
        twoSum(nums, target, i + 1, n - 1);
    }

    if (result.empty()) {
        cout << "No triplets found\n";
    } else {
        for (auto &trip : result) {
            cout << "[";
            for (size_t k = 0; k < trip.size(); ++k) {
                cout << trip[k] << (k + 1 < trip.size() ? ", " : "");
            }
            cout << "]\n";
        }
    }

    return 0;
}
