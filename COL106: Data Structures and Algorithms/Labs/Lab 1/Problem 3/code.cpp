class Solution {
   public:
    bool isPerfectSquare(int n) {
        int low = 0;
        int high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long square = 1LL * mid * mid;
            if (square == n) {
                return true;
            } else if (square < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};
