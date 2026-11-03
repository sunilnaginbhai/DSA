class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
      sort(nums.begin(),nums.end()); 
      int max=nums[n-1];
    int res=0;
      for(int i=0;i<n;i++){
         res=res+abs(nums[i]-max);
      }
      return res;
    }
};