class Solution {
    public:
        int findFinalValue(vector<int>& nums, int original) {
                bool check = false;
                        while(check != true){
                                    for(int i = 0; i < nums.size(); i++){
                                                    if(nums[i] == original){
                                                                        original = original * 2;
                                                                                            check = true;
                                                                                                            }
                                                                                                                        }
                                                                                                                                    if(check == false) return original;
                                                                                                                                                else check = false;
                                                                                                                                                        }
                                                                                                                                                                return 0;
                                                                                                                                                                    }
                                                                                                                                                                    };
