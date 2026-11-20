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
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true ; 

        ListNode* slow = head ; 
        ListNode* fast = head ; 
        while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next ; 
            slow = slow->next ; 
        }
        ListNode *h = slow->next;  
        slow->next = nullptr ; 
        ListNode *prev = reverseList(h) ; 
        ListNode *temp1 = prev ; 
        ListNode *temp2 = head ; 
       
        while(temp1!= nullptr && temp2 != nullptr){
            if(temp1->val != temp2->val) return false ; 
            cout<<temp1->val << " -> " <<temp2->val <<endl ;
            temp1 = temp1->next ; 
            temp2 = temp2->next ; 
        }
        if(!temp2) return true ;
        if(!temp2->next) return true ;
        if(!temp2->next->next) return true  ; 
        
        return false ; 
    }
};