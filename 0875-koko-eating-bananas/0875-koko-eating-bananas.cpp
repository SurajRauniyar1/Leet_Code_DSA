class Solution {
public:
    long long calculateTotalHours(vector<int>& v, int hourly) {
        long long totalH = 0;

        for (int bananas : v) {
            totalH += (bananas + hourly - 1LL) / hourly;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = *max_element(v.begin(), v.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long totalH = calculateTotalHours(v, mid);

            if (totalH <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};