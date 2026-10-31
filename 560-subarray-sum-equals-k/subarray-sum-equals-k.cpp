class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n = nums.size();
    int cnt=0;
    // Loop 1: 'i' marks the starting point of the subarray
    for (int i = 0; i < n; i++) {
        
        // Loop 2: 'j' marks the ending point of the subarray
            int sum=0;
        for (int j = i; j < n; j++) {
            sum+=nums[j];
            // Loop 3: Prints the current subarray from index i to j
            // for (int l = i; l <= j; l++) {
            //     sum+=nums[l];
            // }
            if(sum==k){
                cnt++;
            }
        }
    }
    return cnt;
 }
};