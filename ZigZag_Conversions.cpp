class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> rows(min(numRows,int(s.size())));
        int currentrows=0;
        bool goingdown=false;
        for(char c:s){
            rows[currentrows]+=c;
            if(currentrows==0 || currentrows==numRows-1){
                goingdown=!goingdown;
            }
            currentrows+=goingdown?1:-1;
        }
        string result;
        for(string row:rows){
            result+=row;
        }
        return result;
    }
};
