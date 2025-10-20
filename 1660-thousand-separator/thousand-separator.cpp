class Solution {
    public:
        string thousandSeparator(int n) {
                if(n == 0) return "0";

                        string ans;
                                int cnt = 0;

                                        while(n){

                                                    if(cnt && cnt % 3 == 0)
                                                                    ans.push_back('.');

                                                                                ans.push_back((n%10+'0'));
                                                                                            n /= 10;
                                                                                                        ++cnt;
                                                                                                                }

                                                                                                                        reverse(ans.begin(),ans.end());
                                                                                                                                return ans;
                                                                                                                                    }
                                                                                                                                    };
