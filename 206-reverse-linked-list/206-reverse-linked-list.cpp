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
        
        //Recursion
        /*        
            using recursion to reverse a linked list
                set base case if head is empty or head next is empty
            
            call the recursion function
                to first print out two elements reversed at the end of linked list
            
            return a new linked list 
        
        
        // base case of recursion
        if(head == NULL || head->next == nullptr) return head;
        
        
        // call the recursion function to reverse two elements at each sequence
        ListNode* small = reverseList(head->next);
        ListNode* large = head->next; // an bigger element than before
        large->next = head; // put an smaller element into next
        head->next = nullptr; // set nullptr after a smaller value to stop recursion
        
        return small; // return small
        
        */
        
        //loops
        // remember a pointer refer to node itself, not a value
        // and pointer can connect to each list
        
        /*
            use loop with two pointers
            each sequence loop scan only two elements and put them into one of pointers
        */
        
        // in case when head or head->next is empty
        if(head == nullptr || head->next == nullptr) return head;
        
        // two pointers
        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;
        
        // to return a pointer, make only first elements that will be printed at the end
        // and connect ptr1 to ptr2 in each sequence i.e 1 / 2 1 / 3 2 1
        ptr1->next = nullptr;
        
        // loop
        while(ptr2 != nullptr)
        {
            // move the ptr2 into next at the end
            ListNode* temp = ptr2->next;
            ptr2->next = ptr1; // connect ptr1 to ptr2
            ptr1 = ptr2; // give new head to ptr1
            ptr2 = temp; // ptr2 move to next
        }
        
        
        return ptr1; // return ptr1
    }
};