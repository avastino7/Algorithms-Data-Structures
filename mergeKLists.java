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
    public ListNode mergeKLists(ListNode[] lists) {
        
        //ListNode a = new ListNode();
        if(lists.length==0){
            return null;
        }
    
        for(int k=1; k<lists.length; k++) {
            lists[k]=mergeTwoLists(lists[k],lists[k-1]);

                 
        }
        return lists[lists.length-1];
    }
    
    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null){
       return list2;
       }
        if(list2==null){
            return list1;
        }
        if(list1.val<list2.val){
            list1.next = mergeTwoLists(list1.next , list2);
            return list1;
        }
        else{
            list2.next = mergeTwoLists(list2.next , list1);
        }
         return list2;
    }
}
