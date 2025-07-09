class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string temp="";
        for(string pair:words){
            int left=0,right=pair.length()-1;
            bool ispalindrome=true;
            while(left<right){
                if(pair[left]!=pair[right]){
                    ispalindrome = false;
                    break;
                }
                left++;
                right--;
            }
            if(ispalindrome){
                return pair;
            }
        }
        return "";
    }
};
