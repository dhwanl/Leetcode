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
    ListNode* reverseList(ListNode* head) {
        
        /*
            using recursion to reverse a linked list
                set base case if head is empty or head next is empty
            
            call the recursion function
                to first print out two elements reversed at the end of linked list
            
            return a new linked list 
        */
        
        // base case of recursion
        if(head == NULL || head->next == nullptr) return head;
        
        
        // call the recursion function to reverse two elements at each sequence
        ListNode* small = reverseList(head->next);
        ListNode* large = head->next; // an bigger element than before
        large->next = head; // put an smaller element into next
        head->next = nullptr; // set nullptr after a smaller value to stop recursion
        
        return small; // return small
    }
};