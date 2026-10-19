class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }else{
                temp.push_back(nums[i]);
            }
        }

        int tempsize=temp.size();
        for(int i=tempsize;i<n;i++){
            temp.push_back(0);
        }

        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};