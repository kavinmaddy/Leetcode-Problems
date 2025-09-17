class Solution {
    public:
        bool val(string s, int left, int high) {
                while (left < high) {
                            if (s[left] != s[high]) return false;
                                        left++;
                                                    high--;
                                                            }
                                                                    return true;
                                                                        }

                                                                            bool validPalindrome(string s) {
                                                                                    int n = s.size();
                                                                                            int left = 0;
                                                                                                    int high = n - 1;

                                                                                                            while (left < high) {
                                                                                                                        if (s[left] != s[high]) {
                                                                                                                                        return val(s, left + 1, high) || val(s, left, high - 1);
                                                                                                                                                    }
                                                                                                                                                                left++;
                                                                                                                                                                            high--;
                                                                                                                                                                                    }

                                                                                                                                                                                            return true;
                                                                                                                                                                                                }
                                                                                                                                                                                                };