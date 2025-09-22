class Solution {
    public:
        char nextGreatestLetter(vector<char>& letters, char target) {
                vector<int> freq(26, 0);
                        for (auto& x : letters)
                                    freq[x - 'a']++;
                                            int thres = target - 'a';
                                                    for (int i = 0; i < freq.size(); i++)
                                                                if (i > thres and freq[i])
                                                                                return i + 'a';

                                                                                        return letters[0];
                                                                                            }
                                                                                            };