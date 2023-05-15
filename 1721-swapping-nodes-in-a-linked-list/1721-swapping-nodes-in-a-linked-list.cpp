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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1 = head;
        ListNode* t2=head;
        ListNode* s=NULL;
        
        // int count=0;
        // while(t1->next!=NULL){
        //     count++;
        // }
        // int x=k;
        while(--k){
            t1=t1->next;
        }
        s=t1;
        t1=t1->next;
        
        while(t1){
            t1=t1->next;
            t2=t2->next;
        }
        
        swap(t2->val,s->val);
        return head;
    }
};

  