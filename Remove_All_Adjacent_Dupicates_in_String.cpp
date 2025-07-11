class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char i:s){
            if(!st.empty() && st.top()==i){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        string temp;
        while(!st.empty()){
            temp=temp+st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
