class Solution {
public:
    int findNthDigit(int n) {
        int len=1,start=1;
        long count=9;
        while(n>len*count){
            n=n-len*count;
            len++;
            count=count*10;
            start=start*10;
        }
        int number=start+(n-1)/len;
        string num=to_string(number);
        return num[(n-1)%len]-'0';
    }
};
