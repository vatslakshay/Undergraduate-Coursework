class Solution {
   public:
    int sumOfDigits(int n) {
        int ans = 0;
        while (n > 0) {
            int digit = n % 10;
            ans += digit;
            n /= 10;
        }
        return ans;
    }
};
