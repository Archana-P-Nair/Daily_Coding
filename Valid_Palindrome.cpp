class Solution {
public:
    bool isPalindrome(string s) {
        /*string o;
        for(char c: s){
            if(isalnum(c)){
                o+=tolower(c);
            }
        }
        int left=0;
        int right = o.length()-1;
        while(left<=right){
            if(o[left]!=o[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;*/
        int right=s.length()-1;
        int left=0;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
