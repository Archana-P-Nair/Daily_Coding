class Solution {
    public int findJudge(int n, int[][] trust) {
        int[] trustcount=new int[n+1];
        boolean[] trustsome=new boolean[n+1];
        for(int[] relation:trust){
            int a=relation[0];
            int b=relation[1];
            trustsome[a]=true;
            trustcount[b]++;
        }
        for(int i=1;i<=n;i++){
            if(!trustsome[i] && trustcount[i]==n-1){
                return i;
            }
        }
        return -1;
    }
}
