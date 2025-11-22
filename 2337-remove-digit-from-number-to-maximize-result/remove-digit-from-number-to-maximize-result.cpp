class Solution {
    public:
        string removeDigit(string number, char digit) {
                vector<string>ans;
                        int n=number.size();
                                for(int i=0;i<number.size();i++)
                                        {
                                                   if(number[i]==digit)
                                                              {
                                                                          string temp=number.substr(0,i)+number.substr(i+1,n);
                                                                                      ans.push_back(temp);
                                                                                                 }

                                                                                                         }
                                                                                                                 sort(ans.begin(),ans.end());
                                                                                                                         return ans[ans.size()-1];
                                                                                                                             }
                                                                                                                             };
