class Solution {
public:
      void findcombination(int idx,vector<int>& arr,int target,vector<int>& ds,vector<vector<int>>& ans){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findcombination(idx,arr,target- arr[idx],ds,ans);
            ds.pop_back();
        }
        findcombination(idx+1,arr,target,ds,ans);
       }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,candidates,target,ds,ans); 
        return ans;
    }
};