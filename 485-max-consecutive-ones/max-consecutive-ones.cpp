class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
                int ones = 0;
                        int maxones = INT_MIN;
                                for(int i = 0; i<nums.size(); i++){
                                            if(nums[i] == 0) ones = 0;
                                                        if(nums[i] == 1) ones++;
                                                                    maxones = max(ones, maxones);
                                                                            }
                                                                                    return maxones;
                                                                                        }
                                                                                        };