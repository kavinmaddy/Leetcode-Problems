class Solution {
    public:
        int countGoodRectangles(vector<vector<int>>& rectangles) {
                int count=0;
                        vector<int>a;
                                for(int i=0; i<rectangles.size();i++)
                                        {
                                                    int m=rectangles[i][0], n=rectangles[i][1];
                                                                int y=min(m,n);
                                                                            a.push_back(y);
                                                                                    }
                                                                                            sort(a.begin(),a.end());
                                                                                                    int n=a.size();
                                                                                                            int x=a[n-1];
                                                                                                                    for(int i=0;i<n;i++)
                                                                                                                            {
                                                                                                                                        if(a[i]==x)
                                                                                                                                                        count++;
                                                                                                                                                                }
                                                                                                                                                                        return count;
                                                                                                                                                                            }
                                                                                                                                                                            };
