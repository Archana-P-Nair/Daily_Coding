class Solution {
    public int subarrayLCM(int[] nums, int k) {
        int count=0,n=nums.length;
        for(int i=0;i<n;i++){
            int currentlcm=nums[i];
            if(currentlcm==k)count++;
            for(int j=i+1;j<n;j++){
                currentlcm=lcm(currentlcm,nums[j]);
                if(currentlcm>k)break;
                if(currentlcm==k)count++;
            }
        }
        return count;
    }
    public int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    public int lcm(int a,int b){
        return a/gcd(a,b)*b;
    }
}
