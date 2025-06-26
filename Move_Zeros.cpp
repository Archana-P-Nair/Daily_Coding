class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*if(nums.size()==1 && nums[0]==0)return;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }*/
        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            if(nums[fast]!=0){
                nums[slow++]=nums[fast];
            }
        }
        while(slow<nums.size()){
            nums[slow++]=0;
        }
    }
};
