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
        
        // use two pointers
        ListNode *ptr1, *ptr2;
        
        // find the length of the node
        int size = 1;
        
        // default
        ptr1 = ptr2 = head;
        
        // find out the end of the node
        while(ptr2->next != nullptr)
        {
            ptr2 = ptr2 -> next;
            size++;
        }
     
        // move one of the pointers into the middle
        for(int i = 0; i < (size / 2); i++)
        {
            ptr1 = ptr1 -> next;
        }
        
        // put head into the middle
        head = ptr1;
        
        // return head
        return head;
    }
};