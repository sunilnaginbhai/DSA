class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n=nums2.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
           while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
           }

           if(st.empty()){
              ans[i]=-1;
           }else{
              ans[i]=st.top();
           }
           st.push(nums2[i]);
        }
        int indx;
        vector<int> res(nums1.size());
        for(int i=0;i<nums1.size();i++){
            int temp=nums1[i];

            for(int j=0;j<n;j++){
                if(temp==nums2[j]){
                    indx=j;
                }
            }

            res[i]=ans[indx];
        }
    return res;    
    }
};