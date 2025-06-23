class Solution {
    public boolean checkValidString(String s) {
        int mini=0,maxi=0;
        for(char c:s.toCharArray()){
            if(c=='('){
                mini++;
                maxi++;
            }
            else if(c==')'){
                mini=Math.max(mini-1,0);
                maxi--;
            }
            else{
                mini=Math.max(mini-1,0);
                maxi++;
            }
            if(maxi<0) return false;
        }
        return mini==0;
    }
}
