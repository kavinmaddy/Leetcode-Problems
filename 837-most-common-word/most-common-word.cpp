class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        unordered_map<string, int> m;
        string t = "";
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                t += tolower(s[i]);
            else {
                if (t.length())
                    m[t]++;
                t = "";
            }
        }
        if (t.length())
            m[t]++;
        for (auto x : banned)
            m[x] = 0;
        int res = 0;
        t = "";
        for (auto x : m) {
            if (res < x.second) {
                res = x.second;
                t = x.first;
            }
        }
        return t;
    }
};
