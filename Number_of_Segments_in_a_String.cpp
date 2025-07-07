class Solution {
public:
    int countSegments(string s) {
        int count=0;
        bool issegment=false;
        for(char i:s){
            if(i!=' '){
                if(!issegment){
                    count++;
                    issegment=true;
                }
            }
            else{
                issegment=false;
            }
        }
        return count;
    }
};
