class Solution {
    public:
        string modifyString(string s) {
                int n = s.length();

                        for (int i = 0; i < n; i++) {
                                    if (s[i] == '?') {
                                                    char left = (i > 0) ? s[i - 1] : ' ';
                                                                    char right = (i + 1 < n) ? s[i + 1] : ' ';
                                                                                    s[i] = (left != 'a' && right != 'a')? 'a' : (left != 'b' && right != 'b')? 'b' : 'c';
                                                                                                }
                                                                                                        }return s;
                                                                                                            }
                                                                                                            };
