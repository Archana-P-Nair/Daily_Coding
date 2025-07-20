class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int curr_gcd=nums[0];
        for(int i:nums){
            curr_gcd=gcd(curr_gcd,i);
            if(curr_gcd==1){
                return true;
            }
        }
        return curr_gcd==1;
    }
};
