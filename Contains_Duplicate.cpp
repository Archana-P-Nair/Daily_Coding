class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> m;
       for(int o:nums){
        if(++m[o] == 2)return true;
       }
       return false;
    }
};
