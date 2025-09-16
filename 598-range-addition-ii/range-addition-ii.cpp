class Solution {
    public:
        int maxCount(int m, int n, vector<vector<int>>& ops) {
                if(ops.empty()) return m*n;

                        int minx=m, miny=n;
                                for(auto &op: ops){
                                            minx=min(minx,op[0]);
                                                        miny=min(miny,op[1]);
                                                                } 
                                                                        return minx*miny;
                                                                            }
                                                                            };
