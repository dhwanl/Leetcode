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
    ListNode* middleNode(ListNode* head) {
        
        ListNode *ptr1, *ptr2;
        
        int size = 1;
        
        ptr1 = ptr2 = head;
        
        while(ptr2->next != nullptr)
        {
            ptr2 = ptr2 -> next;
            size++;
        }
     
        for(int i = 0; i < (size / 2); i++)
        {
            ptr1 = ptr1 -> next;
        }
        
        head = ptr1;
        
        return head;
    }
};