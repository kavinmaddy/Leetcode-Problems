class Solution {
    public:
        char slowestKey(vector<int>& releaseTimes, string keysPressed) {
                int n=releaseTimes.size()-1,max=releaseTimes[0];char maxc=keysPressed[0];
                        for(int i=n;i!=0;i--){
                                    releaseTimes[i]-=releaseTimes[i-1];
                                                if(max<releaseTimes[i]){
                                                                max=releaseTimes[i];maxc=keysPressed[i];
                                                                            }
                                                                                        if(max==releaseTimes[i])if(keysPressed[i]>maxc)maxc=keysPressed[i];
                                                                                                }
                                                                                                        return maxc;
                                                                                                            }
                                                                                                            };
