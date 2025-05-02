class Solution {
public:

    // Helper function to check if we can make 'm' bouquets on or before 'day'
    bool canMakeBouquets(vector<int>& bloomDay, int day, int m, int k) {
        int bouquets = 0, flowers = 0;

        // Loop through each flower's bloom day
        for (int bloom : bloomDay) {
            if (bloom <= day) {
                // If flower has bloomed by 'day', count it
                flowers++;
                // If we have enough flowers for one bouquet
                if (flowers == k) {
                    bouquets++;       // one bouquet made
                    flowers = 0;      // reset flower count for next bouquet
                }
            } else {
                // If not bloomed, reset flower count (we need consecutive flowers)
                flowers = 0;
            }
        }

        // Return true if we can make at least 'm' bouquets
        return bouquets >= m;
    }

    // Main function to find the minimum number of days required to make 'm' bouquets
    int minDays(vector<int>& bloomDay, int m, int k) {
        // First check: if total flowers needed is more than available, it's impossible
        long long totalFlowers = (long long)m * k;
        if (bloomDay.size() < totalFlowers) return -1;

        // Set binary search range: minimum and maximum bloom days
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        // Binary search to find the minimum day we can make all bouquets
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Check if it's possible to make 'm' bouquets by 'mid' day
            if (canMakeBouquets(bloomDay, mid, m, k)) {
                result = mid;      // possible answer found, try smaller day
                high = mid - 1;
            } else {
                low = mid + 1;     // not possible, try larger day
            }
        }

        return result;  // return the minimum day found (or -1 if not possible)
    }
};
