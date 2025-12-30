class Solution {
  public:
      bool canMake(int n, vector<int>& rank, int T) {
        int donuts = 0;

        for (int r : rank) {
            int time = 0;
            int k = 1;
            while (time + k * r <= T) {
                time += k * r;
                donuts++;
                k++;
                if (donuts >= n) return true;
            }
        }
        return false;
    }

    int minTime(vector<int>& ranks, int n) {
        // code here
        int minRank = *min_element(ranks.begin(), ranks.end());
        int high = minRank * n * (n + 1) / 2;
        int low = 0, ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canMake(n, ranks, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;      
    }
};
