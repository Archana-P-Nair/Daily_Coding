class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<bool> is_prime(21,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i*i<=20;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=20;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        int count =0;
        for(int num=left;num<=right;num++){
            int set_bits=__builtin_popcount(num);
            if(set_bits<=20 && is_prime[set_bits]){
                count++;
            }
        }
        return count;
    }
};
