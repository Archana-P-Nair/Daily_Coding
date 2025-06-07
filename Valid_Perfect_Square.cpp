class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        long start=2;
        long end=num;
        while(start<=end){
            long mid=start+(end-start)/2;
            long square=mid*mid;
            if(square==num){
                return true;
                break;
            }
            else if(square<num){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};
