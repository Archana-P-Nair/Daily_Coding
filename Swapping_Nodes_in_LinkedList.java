/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode kthstart=head;
        for(int i=1;i<k;i++){
            kthstart=kthstart.next;
        }
        ListNode fast=head,slow=head;
        for(int i=0;i<k;i++){
            fast=fast.next;
        }
        while(fast!=null){
            fast=fast.next;
            slow=slow.next;
        }
        int temp=kthstart.val;
        kthstart.val=slow.val;
        slow.val=temp;

        return head;
    }
}
