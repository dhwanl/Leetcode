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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        int sum = 0;
        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        
        while(l1 != NULL || l2 != NULL)
        {
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
        
            }
                
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            
            if(sum >= 10)
            {
                carry = sum / 10;
                sum = sum % 10;
            }else{
                carry = 0;
            }
            
            temp->next = new ListNode(sum);
            sum = 0;
            temp = temp->next;
            
        }

        if(carry > 0)
        {
            temp->next = new ListNode(carry);
        }
        
        return head->next;
    }
};