class Solution {
   public:
    int trailingZeros(int n) {
        int ans = 0;
        while (n > 0) {
            int fives = n / 5;
            ans += fives;
            n /= 5;
        }
        return ans;
    }
};
