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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode list3=new ListNode(0);
        ListNode actual=list3;
        if(list1==null && list2==null){
            return null;
        }
        if(list1==null){
            return list2;
        }
        if(list2==null){
            return list1;
        }
        while(list1!=null && list2!=null){
            if(list2.val>list1.val){
                actual.next=list1;
                list1=list1.next;
            }
            else{
                actual.next=list2;
                list2=list2.next;
            }
            actual=actual.next;
        }
        if(list1!=null){
            actual.next=list1;
            list1=list1.next;
        }
        else{
            actual.next=list2;
            list2=list2.next;
        }
        return list3.next;
    }
}
