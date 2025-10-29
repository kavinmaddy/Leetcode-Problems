class Solution {
    public:
        int minimumDifference(vector<int>& nums, int k) {
                int i = 0;
                        int j = 0;
                                sort(nums.begin(), nums.end());
                                        int n = nums.size();
                                                
                                                        int minAns = INT_MAX;

                                                                while(j < n)
                                                                        {
                                                                                    if(j - i + 1 == k)
                                                                                                {
                                                                                                                int diff = nums[j] - nums[i];
                                                                                                                                if(minAns > diff)
                                                                                                                                                {
                                                                                                                                                                    minAns = min(minAns, diff);
                                                                                                                                                                                    }
                                                                                                                                                                                                    i++;
                                                                                                                                                                                                                } 
                                                                                                                                                                                                                            j++;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                            return minAns;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                };