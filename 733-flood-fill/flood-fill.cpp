class Solution {
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
                if(image[sr][sc]==color) return image;
                        queue<pair<int,int>> q;
                                int m = image.size();
                                        int n = image[0].size();
                                                q.push({sr,sc});
                                                        int og = image[sr][sc];
                                                                image[sr][sc] = color;
                                                                        while(!q.empty()){
                                                                                    int size = q.size();
                                                                                                int row = q.front().first;
                                                                                                            int col = q.front().second;
                                                                                                                        q.pop();
                                                                                                                                    for(int i=0;i<size;i++){
                                                                                                                                                    int dx[4] = {-1,0,1,0};
                                                                                                                                                                    int dy[4] = {0,1,0,-1};
                                                                                                                                                                                    for(int i=0;i<4;i++){
                                                                                                                                                                                                        int nrow = row+dx[i];
                                                                                                                                                                                                                            int ncol = col + dy[i];
                                                                                                                                                                                                                                                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n &&
                                                                                                                                                                                                                                                                    image[nrow][ncol]==og ){
                                                                                                                                                                                                                                                                                            q.push({nrow,ncol});
                                                                                                                                                                                                                                                                                                                    image[nrow][ncol] = color;
                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                                                    return image;
                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                        };