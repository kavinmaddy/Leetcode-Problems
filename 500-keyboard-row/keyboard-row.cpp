class Solution {
    public:
        // Helper function to check if a word can be typed using one row
            bool checkIfExist(const string& temp) {
                    set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
                            set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
                                    set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

                                            set<char>* selectedRow;
                                                    if (row1.count(temp[0]))
                                                                selectedRow = &row1;
                                                                        else if (row2.count(temp[0]))
                                                                                    selectedRow = &row2;
                                                                                            else
                                                                                                        selectedRow = &row3;

                                                                                                                for (char c : temp) {
                                                                                                                            if (!selectedRow->count(c))
                                                                                                                                            return false;
                                                                                                                                                    }
                                                                                                                                                            return true;
                                                                                                                                                                }

                                                                                                                                                                    vector<string> findWords(vector<string>& words) {
                                                                                                                                                                            vector<string> result;
                                                                                                                                                                                    for (int i = 0; i < words.size(); ++i) {
                                                                                                                                                                                                string curr = words[i];
                                                                                                                                                                                                            transform(curr.begin(), curr.end(), curr.begin(), ::tolower);
                                                                                                                                                                                                                        if (checkIfExist(curr)) {
                                                                                                                                                                                                                                        result.push_back(words[i]); // Keep original casing
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                    return result;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                        };
