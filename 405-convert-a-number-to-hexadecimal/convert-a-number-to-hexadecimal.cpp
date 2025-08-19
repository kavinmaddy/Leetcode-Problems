class Solution {
    public:
        string toHex(int n) {
                char h[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
                        string result="";
                                int rem;
                                        long long num;
                                                if(n==0)
                                                        return "0";
                                                                if(n<0)
                                                                        num=pow(2,32)+n;
                                                                                else
                                                                                        num=n;
                                                                                                while(num){
                                                                                                            rem=num%16;
                                                                                                                        result=h[rem]+result;
                                                                                                                                    num=num/16;
                                                                                                                                            }
                                                                                                                                                    return result;
                                                                                                                                                        }
                                                                                                                                                        };
