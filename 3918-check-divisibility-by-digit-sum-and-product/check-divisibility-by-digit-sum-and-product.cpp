class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int pro=1;
      while(temp>0){
        int lastdig=temp%10;
        sum+=lastdig;
        pro*=lastdig;
        temp=temp/10;
      }
      int ans=pro+sum;

      if(n%ans==0){
        return true;
      }
      return false;
    }
};