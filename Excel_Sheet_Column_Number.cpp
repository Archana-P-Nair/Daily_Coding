class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(int i=0;i<columnTitle.size();i++){
            char a=columnTitle[i];
            int value=a-'A'+1;
            result=result*26+value;
        }
        return result;
    }
};
