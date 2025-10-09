class Solution {
    public:
        int repeatedNTimes(vector<int>& nums) {
                unordered_map<int,int>m;
                        for(auto i:nums)
                                    m[i]++;
                                            for(auto i:m){
                                                        if(i.second == nums.size()/2)
                                                                        return i.first;
                                                                                }
                                                                                        return -1;
                                                                                            }
                                                                                            };
