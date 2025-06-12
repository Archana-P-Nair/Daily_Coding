class Solution {
public:
    int bulbSwitch(int n) {
          
        int count=0,k=1;
        while(k * k<=n){
            count++;
            k++;
        }
        return count;
    }
};
