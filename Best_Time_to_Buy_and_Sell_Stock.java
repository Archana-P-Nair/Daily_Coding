class Solution {
    public int maxProfit(int[] prices) {
        int maxprofit=0;
        int mini=prices[0];
        for(int i=1;i<prices.length;i++){
            if(mini>prices[i]){
                mini=prices[i];
            }
            else if(maxprofit<prices[i]-mini){
                maxprofit=prices[i]-mini;
            }
        }
        return maxprofit;
    }
}
