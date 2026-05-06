class Solution {
   public:
    vector<int> findPair(int target, int limit, vector<int>& transactions) {
        vector<int> ans;
        int len = transactions.size();
        unordered_map<int, int> index;
        for (int i = 0; i < len; i++) {
            int val = transactions[i];
            int need = target - val;
            if (index.find(need) != index.end()) {
                int j = index[need];
                if (i - j <= limit) {
                    ans.push_back(j);
                    ans.push_back(i);
                    return ans;
                }
            }
            index[val] = i;
        }
        return ans;
    }
};
