class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int m = licensePlate.length();
        int n = words.size();

        int hashSize = 26;
        int i = 0;
        int* hash1 = new int[hashSize];
        int* hash2 = new int[hashSize];
        string res = "";

        getLetHash(licensePlate, hash1, hashSize);

        for (string& word : words) {
            getLetHash(word, hash2, hashSize);

            for (i = 0; i < hashSize; ++i) {
                if (hash2[i] < hash1[i]) {
                    break;
                }
            }
            if (i == hashSize &&
                (res.empty() || word.length() < res.length())) {
                res = word;
            }
        }
        return res;
    }
    void getLetHash(string& s, int* hash, int hashSize) {
        memset(hash, 0, sizeof(int) * hashSize);
        for (char c : s) {
            if (isLet(c)) {
                ++hash[toLow(c) - 'a'];
            }
        }
    }
    bool isLet(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }
    char toLow(char c) {
        if (c >= 'A' && c <= 'Z') {
            c += 'a' - 'A';
        }
        return c;
    }
};