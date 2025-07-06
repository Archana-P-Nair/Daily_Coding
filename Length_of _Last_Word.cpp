#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else if(s[i]==' ' && count==0){
                continue;
            }
            else{
                break;
            }
        }
        return count;
    }
};
