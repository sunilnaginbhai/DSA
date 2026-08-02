#include <bits/stdc++.h>
#include <string>

class Solution {
  public:
  int   priority(char ch){

	if(ch=='^'){
		return 3;
	}else if(ch=='*' || ch=='/'){
		return 2;
	}else if(ch=='+' || ch=='-'){
        return 1;
	}

	return -1;
}  

string infixToPrefix(string &s) {
 

	reverse(s.begin(),s.end());
	for(char &c : s){
	    if(c=='('){
	        c=')';
	    }else if(c==')'){
	        c='(';
	    }
	}
	std::stack<char> st;
	int n=s.size();
	string:string ans;
	int i=0;
	while(i<n){
		if((s[i]>='A' && s[i]<='Z') ||
		   (s[i]>='a' && s[i]<='z') ||
		   (s[i]>='0' && s[i]<='9')){
			   ans+=s[i];
		}else if(s[i]=='('){
			st.push(s[i]);
		}else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				ans+=st.top();
				st.pop();
			}
       if(!st.empty())   
        st.pop();
		    
		}else{
			if(s[i]=='^'){
				while(!st.empty() &&  st.top() != '(' &&  priority(s[i])<=priority(st.top())){
				ans+=st.top();
				st.pop();
			   }
			}else{
				while(!st.empty() && priority(s[i])<priority(st.top())){
				ans+=st.top();
				st.pop();
			   }
			}
			st.push(s[i]);
		}
		i++;
	}

	while(!st.empty()){
		ans+=st.top();
        st.pop();
	}
	reverse(ans.begin(),ans.end());

	return ans;
}


    
};
