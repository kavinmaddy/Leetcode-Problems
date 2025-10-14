class Solution {
    public:
        vector<bool> prefixesDivBy5(vector<int>& nums) {
                vector<bool> res;
                        int val{};      // short form of val = 0;

                                for(const int& bit: nums){

                                            // using operator << instead of *2 
                                                        val = ((val << 1) + bit) % 5;
                                                                    // every time it remove part which is divisible by 5

                                                                                res.emplace_back(!val);

                                                                                        }
                                                                                                return res;
                                                                                                    }
                                                                                                    };
