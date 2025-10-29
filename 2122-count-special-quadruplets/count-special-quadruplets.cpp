class Solution {
    public:
        int countQuadruplets(vector<int>& nums) {
                int n = nums.size(), count = 0;
                        int map[101] = {0};
                                for(int b = 1; b < n - 2; ++b){

                                            for(int a = 0; a < b; ++a){
                                                            int sum = nums[b] + nums[a];
                                                                            if(sum < 101) ++map[sum];
                                                                                        }

                                                                                                    int c = nums[b + 1];
                                                                                                                for(int d = b + 2; d < n; ++d){
                                                                                                                                int diff = nums[d] - c;
                                                                                                                                                if(diff >= 0) count += map[diff];
                                                                                                                                                            }

                                                                                                                                                                    }
                                                                                                                                                                            return count;
                                                                                                                                                                                }
                                                                                                                                                                                };
