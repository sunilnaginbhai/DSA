class Solution {
  public:
    string postToPre(string &s) {
    // Write your code here.

    std::stack<string> st;
    int i=0;
    int n=s.size();
    while(i<n){
        	if(isalnum(s[i])){
			   st.push(string(1, s[i]));
           }else{
               string t1=st.top();
               st.pop();
               string t2=st.top();
               st.pop();
               string str=string(1, s[i]) + t2 + t1;
               st.push(str);
           }

           i++;
    }
    return st.top();
}
        
    
};



