#include <bits/stdc++.h>
using namespace std;

// Returns union of two sorted vectors (unique, sorted)
vector<int> solve(const vector<int>& a, const vector<int>& b) {
    vector<int> uni;
    int i = 0, j = 0;
    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] < b[j]) {
            if (uni.empty() || uni.back() != a[i]) uni.push_back(a[i]);
            ++i;
        } else if (a[i] > b[j]) {
            if (uni.empty() || uni.back() != b[j]) uni.push_back(b[j]);
            ++j;
        } else { // equal
            if (uni.empty() || uni.back() != a[i]) uni.push_back(a[i]);
            ++i; ++j;
        }
    }
    // append remaining elements
    while (i < (int)a.size()) {
        if (uni.empty() || uni.back() != a[i]) uni.push_back(a[i]);
        ++i;
    }
    while (j < (int)b.size()) {
        if (uni.empty() || uni.back() != b[j]) uni.push_back(b[j]);
        ++j;
    }
    return uni;
}

int main() {
    vector<int> arr1 = {1,2,4,5,6};
    vector<int> arr2 = {1,2,4,4,6,7};

    vector<int> result = solve(arr1, arr2);

    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
