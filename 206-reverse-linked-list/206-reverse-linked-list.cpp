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
        ListNode* prev;
        ListNode* curr;
        curr=head;
        prev=NULL;
        while(curr!=NULL){
            ListNode* nextt;
            nextt=curr->next;
            curr->next=prev;
          
            prev=curr;
            curr=nextt;
        }
        
        return prev;
    }
};