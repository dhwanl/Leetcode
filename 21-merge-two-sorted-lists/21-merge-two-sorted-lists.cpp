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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        /*
            use recursion
            
            1. find smaller elements out and put it first
            2. keep comparing and put it next
            3. call the function to repeat it
            4. set base case to cease the repetition
        */
        
        // a case when list1 is empty
        if(list1 == nullptr)
            return list2;
        // a case when list2 is empty
        if(list2 == nullptr)
            return list1;
        
        if(list1->val <= list2->val){
            
            // merge lists without moving pointers
            list1->next = mergeTwoLists(list1->next, list2); // call function for recursion
            return list1;
            
        }else{
            
            // merge lists without moving pointers
            list2->next = mergeTwoLists(list1, list2->next); // call function again
            return list2;
        }
    }
};