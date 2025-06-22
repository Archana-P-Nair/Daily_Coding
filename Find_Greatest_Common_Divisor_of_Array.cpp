class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=nums[0],mini=nums[0];
        for(int num:nums){
            if(num>maxi){
                maxi=num;
            }
            if(mini>num){
                mini=num;
            }
        }
        int maxii=1;
        for(int i=2;i<=maxi;i++){
            if(mini%i==0 && maxi%i==0){
                maxii=max(maxii,i);
            }
        }
        return maxii;
    }
};
