class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=INT_MAX;
        int maxi=0;
        for(int i=0;i<=n-1;i++){
           if(prices[i]<min){
            min=prices[i];
           }

           int profit=prices[i]-min;
 
           if (profit > maxi) {
                maxi = profit;
            }
        }
        return maxi;
    }
};