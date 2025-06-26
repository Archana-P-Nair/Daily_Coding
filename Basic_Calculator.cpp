class Solution {
public:
    int calculate(string s) {
        stack<int> stack;
        int result=0,number=0,sign=1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(isdigit(c)){
                number=number*10+(c-'0');
            }else if(c=='+'){
                result=result+sign*number;
                sign=1;
                number=0;
            }else if(c=='-'){
                result=result+sign*number;
                sign=-1;
                number=0;
            }
            else if(c=='('){
                stack.push(result);
                stack.push(sign);
                result=0;
                sign=1;
            }
            else if(c==')'){
                result=result+sign*number;
                number=0;
                int prev_sign=stack.top(); stack.pop();
                int prev_result=stack.top();  stack.pop();
                result=prev_result+prev_sign*result;
            }
        }
        result=result+sign*number;
        return result;
    }
};
