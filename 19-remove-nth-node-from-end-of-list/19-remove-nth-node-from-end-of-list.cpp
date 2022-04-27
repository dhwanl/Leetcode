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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size = 0;
        
        ListNode *ptr1, *ptr2;
        
        ptr1 = ptr2 = head;
        
        while(ptr2 != nullptr)
        {
            ptr2 = ptr2 -> next;
            size++;
        }
        
        if(size == 1 && n == 1) return head = nullptr;
        else if(size <= n) return head->next;
        else if(size > n){
            
            ptr2 = head -> next;
            
            for(int i = 1; i < size - n; i++)
            {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            
            ptr2 = ptr2->next;
            
            ptr1->next = ptr2;
            
        }
        
        
        
        return head;
    }
};