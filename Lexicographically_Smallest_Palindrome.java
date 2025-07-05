class Solution {
    public String makeSmallestPalindrome(String s) {
        int left=0,right=s.length()-1;
        char[] chars=s.toCharArray();
        while(left<right){
            if(chars[left]!=chars[right]){
                char smaller=(char)Math.min(chars[left],chars[right]);
                chars[left]=smaller;
                chars[right]=smaller;
            }
            left++;
            right--;
        }
        return new String(chars);
    }
}
