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
    int pairSum(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        
        stack<int> st;
        int count=0,s=1;
        ListNode* tmp = head;
        while(tmp!=NULL){
          count++;
          tmp=tmp->next;
        }
        ListNode* ptr=head;
        while(s<=(count/2)){
            st.push(ptr->val);
            ptr=ptr->next;
            s++;
        }
        int ans=INT_MIN;
        // ptr=ptr->next;
        while(ptr){
           
            
            ans=max(ans,st.top() + ptr->val);
            st.pop();
            ptr=ptr->next;
        }
        return ans;
    }
};