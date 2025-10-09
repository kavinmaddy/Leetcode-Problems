class Solution {
    public:
        vector<int> diStringMatch(string s) {
                int n = s.size();
                        int low = 0, high = n;
                                vector<int> result;

                                        for (char c : s) {
                                                    if (c == 'I')
                                                                    result.push_back(low++);
                                                                                else
                                                                                                result.push_back(high--);
                                                                                                        }
                                                                                                                result.push_back(low); 
                                                                                                                        return result;
                                                                                                                            }
                                                                                                                            };
