class Solution {
    public:
        bool judgeCircle(string moves) {
                int u=0,d=0,l=0,r=0;
                        for(int i=0;i<moves.size();i++){
                                    if(moves[i]=='U')u++;
                                                if(moves[i]=='D')d++;
                                                            if(moves[i]=='L')l++;
                                                                        if(moves[i]=='R')r++;
                                                                                }
                                                                                        if(u==d&&l==r)return true;
                                                                                                return false;
                                                                                                    }
                                                                                                    };
