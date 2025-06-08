class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            if(n==1) return true;
            if(n==4) return false;
            int sq=0;
            while(n>0){
            int rem=n%10;
            sq=sq+(rem*rem);
            n=n/10;
            }
            n=sq;
        }
        return true;
    }
};
