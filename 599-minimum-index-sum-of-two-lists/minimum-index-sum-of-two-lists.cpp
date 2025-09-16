class Solution {
    public:
        vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
                vector<string>s;
                        map<string,int>mp;
                                for(int i=0;i<list1.size();i++){
                                            for(int j=0;j<list2.size();j++){
                                                            if(list1[i]==list2[j]){
                                                                                mp[list1[i]]=i+j;
                                                                                                    break;
                                                                                                                    }
                                                                                                                                }
                                                                                                                                        }
                                                                                                                                                int mini=INT_MAX;
                                                                                                                                                        for(auto i:mp){
                                                                                                                                                                    if(i.second<mini){
                                                                                                                                                                                    mini=i.second;
                                                                                                                                                                                                }
                                                                                                                                                                                                        }
                                                                                                                                                                                                                 for(auto i:mp){
                                                                                                                                                                                                                             if(i.second==mini){
                                                                                                                                                                                                                                             s.push_back(i.first);
                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                         return s;
                                                                                                                                                                                                                                                                             }
                                                                                                                                                                                                                                                                             };
