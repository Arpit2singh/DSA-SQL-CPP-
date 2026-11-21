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
    ListNode* check(ListNode*head , int k){
           if(!head || !head->next) return head ; 
        if(k ==0 ) return head ; 
        ListNode*temp = head ; 
        while(temp->next->next != nullptr){
            temp = temp->next ; 
        }
        ListNode*fut = temp->next ; 
        fut->next = head ; 
        head = fut ; 
        temp->next = nullptr ; 

        return check(head , k-1) ;


    }
    ListNode* rotateRight(ListNode* head, int k) {
            if(!head || !head->next) return head ; 
        if(k ==0 ) return head ; 
        int n = 0 ;

        ListNode*temp = head ; 
        while(temp != nullptr){
            temp = temp->next ; 
            n++ ; 
        }
        k = k % n ; 
        return check(head , k) ; 

    }
};