class Solution {
    public:
        int findPoisonedDuration(vector<int>& timeSeries, int duration) {
                long long time=0;
                        long long n=timeSeries.size();
                                time= n*duration;
                                        if(n==1)return time;
                                                for(int i=1;i<n;i++){
                                                            if(timeSeries[i]<timeSeries[i-1]+duration){
                                                                            long long diff= timeSeries[i]-timeSeries[i-1];
                                                                                            time=time-duration+diff;
                                                                                                        }
                                                                                                                }
                                                                                                                        return int(time);
                                                                                                                            }
                                                                                                                            };