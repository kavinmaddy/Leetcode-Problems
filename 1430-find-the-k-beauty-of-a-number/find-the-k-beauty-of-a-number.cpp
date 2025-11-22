class Solution {
    public:
        int divisorSubstrings(int num, int k) {
                int ans=0;
                        string str=to_string(num);
                                int n=str.length();
                                        if(n==k) return 1;
                                                for(int i=1;i<n;i++)
                                                        {
                                                                    if(n-i>=k)
                                                                                {
                                                                                                string s=str.substr(i-1,k);
                                                                                                                int val=stoll(s);
                                                                                                                                if(val!=0)  if(num%val==0)  ans++;
                                                                                                                                            }
                                                                                                                                                        
                                                                                                                                                                }
                                                                                                                                                                        string s=str.substr(n-k,k);
                                                                                                                                                                                int val=stoll(s);
                                                                                                                                                                                        if(val!=0)  if(num%val==0)  ans++;
                                                                                                                                                                                                return ans;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    };
