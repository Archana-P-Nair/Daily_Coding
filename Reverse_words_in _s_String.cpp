class Solution {
public:
    string reverseWords(string s) {
        int left=0,right=s.length()-1;
        while(left<=right && s[left]==' ')left++;
        while(left<=right && s[right]==' ')right--;
        s=s.substr(left,right-left+1);
        reverse(s.begin(),s.end());

        left=0,right=0;
        while (left<s.size()){
            while(right<s.size() && s[right]==' ') right++;
            left=right;
            while(right<s.size() && s[right]!=' ')right++;
            reverse(s.begin()+left,s.begin()+right);
            left=right;
        }
        int i=0,j=0;
        while(j<s.size()){
            if(s[j]!=' '){
                if(i!=0 && s[j-1]==' ')s[i++]=' ';
                s[i++]=s[j];
            }
            j++;
        }
        s.resize(i);
        return s;
    } 
};
