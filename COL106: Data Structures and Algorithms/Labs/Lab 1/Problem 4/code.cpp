class Solution {
   public:
    bool isPalindrome(int n) {
        int original = n;
        long long reversed = 0;
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        if (original == reversed) {
            return true;
        }
        return false;
    }
};
