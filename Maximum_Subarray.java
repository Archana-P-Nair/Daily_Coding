class Solution {
    public int maxSubArray(int[] nums) {
        int current_sum=0;
        int maximum_sum=Integer.MIN_VALUE;
        for(int i:nums){
            current_sum+=i;
            maximum_sum=Math.max(maximum_sum,current_sum);
            if(current_sum<0) current_sum=0;
        }
        return maximum_sum;
    }
}
