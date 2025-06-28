class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        int first=-1,last=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if (nums[mid]==target){
                first=last=mid;
                while(first>0 &&nums[first-1]==target) first--;
                while(last<n-1 && nums[last+1]==target)last++;
                return {first,last};
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return{-1,-1};
    }
};
