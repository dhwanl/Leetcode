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
        
        /*
            1. find out the size of the node to calculate where the nth element is
            2. use two pointers to read all nodes through
                and connect nodes except for a nth node
            3. use if else statement
        */
        
        int size = 0;
        
        ListNode *ptr1, *ptr2;
        
        // default two pointers
        ptr1 = ptr2 = head;
        
        // find the end of nodes and its size
        while(ptr2 != nullptr)
        {
            ptr2 = ptr2 -> next;
            size++;
        }
        
        // return nothing
        if(size == 1 && n == 1) return head = nullptr;
        else if(size <= n) return head->next; // first element must be taken out from the node
        else if(size > n){
            
            ptr2 = head -> next; // reset ptr2
            
            for(int i = 1; i < size - n; i++)
            {
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            
            ptr2 = ptr2->next; // skip n-th element
            
            ptr1->next = ptr2; // connect node to the next element after n-th element
            
        }
        
        return head; // return
    }
};