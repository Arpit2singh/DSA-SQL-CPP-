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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return nullptr ; 
        if(!head->next) return head ; 
        ListNode*temp = head ; 
        int n = k-1 ; 
      
        while(n>0 && temp->next != nullptr){
            temp = temp->next ; 
            n-- ; 
        }
       
        if(n>0) return head ; 
        // if(!temp->next) return head ; 
        
        ListNode*fut = temp->next ;
        temp->next = nullptr ; 
        ListNode *prev = reverseList(head) ; 
        head->next = reverseKGroup(fut , k) ;  
    
        return prev ;
    }
};