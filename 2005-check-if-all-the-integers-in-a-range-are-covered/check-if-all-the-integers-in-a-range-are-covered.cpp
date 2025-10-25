class Solution {
    public:
        bool isCovered(vector<vector<int>>& ranges, int left, int right) 
            {
                    unordered_set<int>s;
                            for(int i=left;i<=right;i++)
                                    {
                                                s.insert(i);
                                                        }
                                                                for(int i=0;i<ranges.size();i++)
                                                                        {
                                                                                    for(int j=ranges[i][0];j<=ranges[i][1];j++)
                                                                                                {
                                                                                                                if(s.find(j)!=s.end())
                                                                                                                                {
                                                                                                                                                    s.erase(j);
                                                                                                                                                                    }
                                                                                                                                                                                   
                                                                                                                                                                                               }
                                                                                                                                                                                                          
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                          return s.empty()?true:false;
                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      };
