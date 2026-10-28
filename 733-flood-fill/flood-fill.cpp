class Solution {
    void bfs(int sr,int sc, vector<vector<int>> &vis, vector<vector<int>> &image,int color){
            vis[sr][sc]=1;
            queue<pair<int,int>> q;
            q.push({sr,sc});
            int n=image.size();
            int m=image[0].size();
            int initial=image[sr][sc];
            image[sr][sc]=color;
            
            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
            while(!q.empty()){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();

               for(int i=0;i<4;i++){
                 int nrow =row + delrow[i];
                 int ncol =col + delcol[i];

                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && 
                 image[nrow][ncol]!=color &&  image[nrow][ncol]==initial){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                    image[nrow][ncol]=color;
                 }
               }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        bfs(sr,sc,vis,image,color);
        return image;
    }
};