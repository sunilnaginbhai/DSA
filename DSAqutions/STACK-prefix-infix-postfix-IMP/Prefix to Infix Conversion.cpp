class Solution {
  public:
    string preToInfix(string &s) {
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
               string str="("+t1+string(1, s[i])+t2+")";
               st.push(str);
           }

           i--;
    }
    return st.top();
}
        
    
};