#include<bits/stdc++.h>
class Solution {
public:
    string reformat(string s) 
        {
                string digit, ch;
                        for(char c:s)
                                {
                                            if(isdigit(c)) digit += c;
                                                        else ch += c;
                                                                }
                                                                        int n = digit.size(), m = ch.size(), i = 0;
                                                                                if(abs(n - m) > 1) return "";
                                                                                        
                                                                                                string ans;
                                                                                                        bool flag = true;
                                                                                                                if(n < m) flag = !flag;

                                                                                                                        while(i < n and i < m)
                                                                                                                                {
                                                                                                                                            if(flag)
                                                                                                                                                        {
                                                                                                                                                                        ans += digit[i];
                                                                                                                                                                                        ans += ch[i];
                                                                                                                                                                                                    }
                                                                                                                                                                                                                else 
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                            ans += ch[i];
                                                                                                                                                                                                                                                            ans += digit[i];
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    i++;
                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                    if(n != m) ans += (flag ? digit.back() : ch.back());

                                                                                                                                                                                                                                                                                                            return ans;
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                };