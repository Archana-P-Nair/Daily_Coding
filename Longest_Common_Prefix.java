class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String first = strs[0];
        int n=strs.length;
        String last=strs[n-1];
        String prefix="";
        for(int i=0;i<first.length();i++){
            if(first.charAt(i)==last.charAt(i)){
                prefix=prefix+last.charAt(i);
            }
            else{
                return prefix;
            }
        }
        return prefix;
    }
}
