class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        if(s.size()%2!=0){
            return false;
        }

        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    return false;
                }else{

                char c=st.top();

                if(s[i]==')'){
                    if(s[i]==')' && c=='('){
                    st.pop();
                }else{
                    return false;
                }
                }

                if(s[i]==']'){
                    if(s[i]==']' && c=='['){
                    st.pop();
                }else{
                    return false;
                }
                }

                if(s[i]=='}'){
                    if(s[i]=='}' && c=='{'){
                    st.pop();
                }else{
                    return false;
                }
                }

                
                }

            }
        }

        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};