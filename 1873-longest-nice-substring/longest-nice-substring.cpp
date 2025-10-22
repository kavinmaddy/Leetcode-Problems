class Solution {
    public:
        bool check(string s){
                vector<int> t1(26, 0), t2(26, 0); 
                        for(int i=0; i<s.length(); i++) if(s[i] >= 'a' && s[i] <= 'z') t1[s[i] - 'a']++; 
                                for(int i=0; i<s.length(); i++) if(s[i] >= 'A' && s[i] <= 'Z') t2[s[i] - 'A']++; 

                                         for(int i=0; i<26; i++){
                                                     if(t1[i] == 0 && t2[i] == 0) continue; 
                                                                 else if(t1[i] == 0 && t2[i] > 0) return false;  
                                                                             else if(t1[i] > 0 && t2[i] == 0) return false; 
                                                                                     } 

                                                                                             return true; 
                                                                                                 }

                                                                                                     string longestNiceSubstring(string s) {

                                                                                                             if(s == "") return ""; 
                                                                                                                     if(check(s)) return s; 

                                                                                                                             unordered_map<char,int> m; 
                                                                                                                                     vector<int> t1(26, 0), t2(26, 0); 
                                                                                                                                             for(int i=0; i<s.length(); i++) if(s[i] >= 'a' && s[i] <= 'z') t1[s[i] - 'a']++; 
                                                                                                                                                     for(int i=0; i<s.length(); i++) if(s[i] >= 'A' && s[i] <= 'Z') t2[s[i] - 'A']++; 
                                                                                                                                                           

                                                                                                                                                                   for(int i=0; i<26; i++){
                                                                                                                                                                               if(t1[i] == 0 && t2[i] == 0) continue; 
                                                                                                                                                                                           else if(t1[i] == 0 && t2[i] > 0) m[i + 'A']++; 
                                                                                                                                                                                                       else if(t1[i] > 0 && t2[i] == 0) m[i + 'a']++; 
                                                                                                                                                                                                               } 



                                                                                                                                                                                                                       vector<string> ans; string temp = ""; 
                                                                                                                                                                                                                               for(int i=0; i<s.length(); i++){
                                                                                                                                                                                                                                           if(m.find(s[i]) == m.end()) temp += s[i]; 
                                                                                                                                                                                                                                                       else {
                                                                                                                                                                                                                                                                       ans.push_back(temp); temp = ""; 
                                                                                                                                                                                                                                                                                   }
                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                              if(temp != "") ans.push_back(temp); 

                                                                                                                                                                                                                                                                                                                      string kk = ""; 

                                                                                                                                                                                                                                                                                                                              for(int i=0; i<ans.size(); i++){
                                                                                                                                                                                                                                                                                                                                          if(ans[i] == "") continue; 
                                                                                                                                                                                                                                                                                                                                                      string t = longestNiceSubstring(ans[i]);
                                                                                                                                                                                                                                                                                                                                                                  if(t == "") continue;  
                                                                                                                                                                                                                                                                                                                                                                              if(kk == "" || kk.length() < t.length()) kk = t; 
                                                                                                                                                                                                                                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                                                                       }

                                                                                                                                                                                                                                                                                                                                                                                               return kk; 


                                                                                                                                                                                                                                                                                                                                                                                                   }
                                                                                                                                                                                                                                                                                                                                                                                                   };
