class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int findit = target - nums[i];
            if(m.find(findit)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[findit]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};
