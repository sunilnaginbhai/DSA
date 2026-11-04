class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            int deg=0;
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    deg++;
                    ans[i]=deg;
                }
            }
        }
        return ans;
    }
};