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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        int s=0;
        while(dummy->next){
            dummy=dummy->next;
            s++;
        }
        dummy->next=head;
        int target=s-(k%s);
        while(--target){
            head=head->next;
        }
        ListNode* ans=head->next;
        head->next=NULL;
        return ans;
        
    }
};