class Solution {
public:
    bool judgeSquareSum(int c) {
        long left=0;
        long right=static_cast<long>(sqrt(c));
        while(left<=right){
            long sum=left*left+right*right;
            if(sum==c)return true;
            if(sum<c){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};
