class Solution {
public:
    int smallestNumber(int n, int t){
        for(int i=n;i<=100;i++){
            int multi=1;
            int num=i;
            while(num!=0){
                int lastdig=num%10;
                multi=multi*lastdig;
                num=num/10;
            }
            if(multi % t==0){
                return i;
                break;
            }
        }
        return 0;
    }
};