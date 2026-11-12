class Solution {
    bool issort(vector<int> arr){
        int n=arr.size();
        bool isAsc=true;
        bool isDesc=true;
        for(int i=1;i<n;i++){
            if(!(arr[i]>arr[i-1])){
                isAsc=false;
            }
            if(!(arr[i]<arr[i-1])){
                isDesc=false;
            }
        }

        return isAsc || isDesc;
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;

        for (int i = 0; i < n; i++) {
            vector<int> current;
            for (int j = i; j < n; j++) {
                current.push_back(nums[j]);
                bool istrue=issort(current);
                if(istrue){
                    if(cnt<=current.size()){
                        cnt=current.size();
                    }
                }
            }
        }
        return cnt;
    }
};