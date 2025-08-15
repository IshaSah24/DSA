/*
💡 Problem Understanding:

we're given:
- `bloomDay[]`: An array where `bloomDay[i]` is the day the i-th flower will bloom.
- `m`: Number of bouquets we want to make.
- `k`: Number of **adjacent** flowers needed to make one bouquet.

⛔ Constraint:
- we can only use flowers that have bloomed.
- Each bouquet must have `k` consecutive bloomed flowers.

🎯 Objective:
Find the **minimum day** such that it is possible to make **at least `m` bouquets**.
If not possible, return -1.

🧠 Idea:
- Use **binary search** to find the earliest day on which we can form all required bouquets.
- The helper function will check if it's possible to make `m` bouquets by a specific day.

*/

// Main class
class Solution {
public:

    // ✅ Step 1: Helper function to check if we can make 'm' bouquets on or before a specific 'day'
    bool canMakeBouquets(vector<int>& bloomDay, int day, int m, int k) {
        int bouquets = 0, flowers = 0;

        // Traverse each flower's bloom day
        for (int bloom : bloomDay) {
            if (bloom <= day) {
                flowers++;  // Flower is bloomed and usable
                if (flowers == k) {
                    bouquets++;   // Make a bouquet
                    flowers = 0;  // Reset flower count for next bouquet
                }
            } else {
                flowers = 0; // Not bloomed, so sequence breaks
            }
        }

        // Check if we were able to make at least 'm' bouquets
        return bouquets >= m;
    }

    // ✅ Step 2: Main function to compute the minimum number of days
    int minDays(vector<int>& bloomDay, int m, int k) {
        // Edge case: Not enough flowers
        long long totalFlowers = (long long)m * k;
        if (bloomDay.size() < totalFlowers) return -1;

        // Binary search boundaries: min and max bloom day
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        // ✅ Step 3: Binary search for the minimum valid day
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If we can make bouquets by mid day, try earlier
            if (canMakeBouquets(bloomDay, mid, m, k)) {
                result = mid;
                high = mid - 1;
            } else {
                // Otherwise try later days
                low = mid + 1;
            }
        }

        // Return the earliest valid day found, or -1 if not possible
        return result;
    }
};
