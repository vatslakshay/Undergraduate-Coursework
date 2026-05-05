class Solution {
   public:
    bool hasMatch(vector<int>& signals) {
        int len = signals.size();
        unordered_set<int> seen;
        for (int i = 0; i < len; i++) {
            int freq = signals[i];
            int twice = freq * 2;
            int half = freq / 2;
            if (seen.find(twice) != seen.end() || (freq % 2 == 0 && seen.find(half) != seen.end())) {
                return true;
            }
            seen.insert(freq);
        }
        return false;
    }
};
