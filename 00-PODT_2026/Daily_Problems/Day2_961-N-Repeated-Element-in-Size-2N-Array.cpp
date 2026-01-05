class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for (int x : nums) {
            if (!s.insert(x).second) return x;
        }
        return -1;
    }
};


// Example 1:
// ---------------
// Input: nums = [1,2,3,3]
// Output: 3



// Example 3:
// -------------
// Input: nums = [5,1,5,2,5,3,5,4]
// Output: 5

