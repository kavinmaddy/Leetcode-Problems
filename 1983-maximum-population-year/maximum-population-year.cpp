class Solution {
    public:
        int maximumPopulation(vector<vector<int>>& logs) {
                vector<int> arr(101, 0);

                        for(auto &log : logs){
                                    arr[log[0] - 1950]++;
                                                arr[log[1] - 1950]--;
                                                        }

                                                                int max_pop = 0, year = 1950, curr = 0;
                                                                        for (int i = 0; i <= 100; i++) {
                                                                                    curr += arr[i];
                                                                                                if (curr > max_pop) {
                                                                                                                max_pop = curr;
                                                                                                                                year = 1950 + i;
                                                                                                                                            }
                                                                                                                                                    }

                                                                                                                                                            return year;
                                                                                                                                                                }
                                                                                                                                                                };
