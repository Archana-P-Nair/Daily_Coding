/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> nums;
        ListNode* temp=head;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int maxsum=0,n=nums.size();
        for(int i=0;i<n/2;i++){
            int twin_index=n-i-1;
            int currentsum=nums[i]+nums[twin_index];
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};
