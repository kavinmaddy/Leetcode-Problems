class Solution {
    public:
        double trimMean(vector<int>& arr) {
                sort(arr.begin(), arr.end());
                        double n = arr.size();
                                double num = n * 0.05;
                                        double sum = 0;
                                                for(double i = num; i < n - num; i++){
                                                            sum += arr[i];
                                                                    }
                                                                            n -= 2 * num;
                                                                                    double res = sum / n;
                                                                                            return res;
                                                                                                }
                                                                                                };
