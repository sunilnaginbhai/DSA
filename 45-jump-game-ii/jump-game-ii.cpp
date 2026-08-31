class Solution {
public:
    
    int jump(vector<int>& nums) {
        int jumping=0;
        int l=0;
        int r=0;
        while(r<nums.size()-1){
            int forthis=0;
            for(int i=l;i<=r;i++){
                forthis=max(i+nums[i],forthis);
            }
            l=r+1;
            r=forthis;
            jumping++;
        }
        return jumping;
    }
};