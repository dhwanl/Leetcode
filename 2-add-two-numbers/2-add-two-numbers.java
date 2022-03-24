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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        int carry = 0;
        int sum = 0;
        ListNode head = new ListNode(0);
        ListNode temp = head;
        
        while(l1 != null || l2 != null)
        {
            int x = l1 != null ? l1.val : 0;
            int y = l2 != null ? l2.val : 0;
            
            sum = x + y + carry;
            
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
            
            if(sum >= 10)
            {
                carry = (sum / 10);
                sum = sum % 10;

            }else{
                
                carry = 0;
            }
            
            temp.next = new ListNode(sum);
            temp = temp.next;
        }
        
        if(carry > 0)
        {
            temp.next = new ListNode(carry);
        }
        
        return head.next;
    }
}