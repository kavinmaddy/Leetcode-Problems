class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int start = 0;
        for (int i = 1, n = s.length(); i <= n; ++i) {
            if (i == n || s[i] != s[start]) {
                if (i - start >= 3)
                    res.push_back({start, i - 1});
                start = i;
            }
        }
        return res;
    }
};
