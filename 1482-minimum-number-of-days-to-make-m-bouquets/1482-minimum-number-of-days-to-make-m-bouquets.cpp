class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;

        for (int bloom : bloomDay) {
            if (bloom <= day) {
                flowers++;

                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        long long need = 1LL * m * k;
        if (need > bloomDay.size())
            return -1;

        int st = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (canMake(bloomDay, m, k, mid))
                end = mid - 1;
            else
                st = mid + 1;
        }

        return st;
    }
};