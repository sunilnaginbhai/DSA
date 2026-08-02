#include <bits/stdc++.h>
#include <string.h>


class Solution {
  public:
    string preToPost(string &s) {
    // Write your code here.

    std::stack<string> st;
    int i=s.size()-1;
    while(i>=0){
        	if(isalnum(s[i])){
			   st.push(string(1, s[i]));
           }else{
               string t1=st.top();
               st.pop();
               string t2=st.top();
               st.pop();
               string str=t1+t2+string(1, s[i]);
               st.push(str);
           }

           i--;
    }
    return st.top();
}   
    
};





