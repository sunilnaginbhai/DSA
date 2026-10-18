class Solution {
private:
    void bfs(int row, int col, vector<vector<int>>& vis,
             vector<vector<char>>& grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // traversel in the neighbor and mark as vis

            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int neigborRow = row + delrow;
                    int neigborCol = col + delcol;

                      if (delrow != 0 && delcol != 0) continue;

                        if (neigborRow >= 0 && neigborRow < n &&
                            neigborCol >= 0 && neigborCol < m &&
                            grid[neigborRow][neigborCol] == '1' &&
                            !vis[neigborRow][neigborCol]) {
                            vis[neigborRow][neigborCol] = 1;
                            q.push({neigborRow, neigborCol});
                        }
                    
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;

        for (int row = 0; row < n; row++) {
            for (int col=0; col < m; col++) {
                if (!vis[row][col] && grid[row][col] == '1') {
                    cnt++;
                    bfs(row, col, vis, grid);
                }
            }
        }
        return cnt;
    }
};