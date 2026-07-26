class Solution {
public:
    int countDays(vector<int>& weights, int capacity) {
        int days = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w <= capacity) {
                load += w;
            } else {
                days++;
                load = w;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int requiredDays = countDays(weights, mid);

            if (requiredDays <= days)
                high = mid - 1;   // Try smaller capacity
            else
                low = mid + 1;    // Need larger capacity
        }

        return low;
    }
};