class Solution {
    public:
        vector<int> sortArrayByParityII(vector<int>& nums) {
                int n = nums.size();
                        for (int i = 0; i < n; i++) {
                                    nums[i] = nums[i] << 16;
                                            }

                                                    int odd = 1;
                                                            int even = 0;

                                                                    for (int i = 0; i < n; i++) {
                                                                                int val = nums[i] >> 16;
                                                                                            if (val & 1) {
                                                                                                            nums[odd] |= val;
                                                                                                                            odd += 2;
                                                                                                                                        } else {
                                                                                                                                                        nums[even] |= val;
                                                                                                                                                                        even += 2;
                                                                                                                                                                                    }
                                                                                                                                                                                            }

                                                                                                                                                                                                    for (int i = 0; i < n; i++) {
                                                                                                                                                                                                                nums[i] = nums[i] & 0xFFFF;
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                return nums;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    };
