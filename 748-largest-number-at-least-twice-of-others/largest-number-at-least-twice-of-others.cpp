class Solution {
    public:
        int dominantIndex(vector<int>& nums) {
                int a,c=0;
                        for(int i=0;i<nums.size();i++)
                                {
                                            if(c < nums[i])
                                                        {
                                                                        c = nums[i];
                                                                                        a = i;
                                                                                                    }
                                                                                                            }
                                                                                                                    sort(nums.begin(),nums.end());
                                                                                                                            if(c >= 2*nums[nums.size()-2])
                                                                                                                                    {
                                                                                                                                                return a;
                                                                                                                                                        }
                                                                                                                                                                else
                                                                                                                                                                        {
                                                                                                                                                                                    return -1;
                                                                                                                                                                                            }
                                                                                                                                                                                                }
                                                                                                                                                                                                };