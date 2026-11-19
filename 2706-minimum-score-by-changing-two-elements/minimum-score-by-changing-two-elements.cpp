class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if(n == 3){
            return 0;
        }

        sort(nums.begin(), nums.end());

        // changing two smallest elements
        int n1 = nums[2];
        int n2 = nums[n-1];
        int ans = n2 - n1;

        // changing two largest elements
        int n3 = nums[0];
        int n4 = nums[n-3];
        ans = min(ans, n4-n3);

        // chaning first and last element
        int n5 = nums[1];
        int n6 = nums[n-2];
        ans = min(ans, n6-n5);

        return ans;
    }
};