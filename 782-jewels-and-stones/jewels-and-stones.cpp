class Solution {
    public:
        int numJewelsInStones(string jewels, string stones) {
                // Create an unordered_map to count stones
                        unordered_map<char, int> count;
                                int aux = 0;
                                        // Count the occurrences of each stone
                                                for (char stone : stones) 
                                                            count[stone]++;
                                                                    // Check how many jewels are in our stones
                                                                            for (char jewel : jewels) 
                                                                                        aux += count[jewel];
                                                                                                return aux;
                                                                                                    }
                                                                                                    };