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

class compare{
     public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val>b->val;
    }
    
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& listArray) {
        priority_queue<ListNode*,vector<ListNode*>,compare> minheap;
    int k=listArray.size();
    if(k==0){
        return NULL;
    }
    
    for(int i=0; i<k; i++){
        if(listArray[i] != NULL){
            minheap.push(listArray[i]);
        }
    }
   ListNode* head=NULL;
    ListNode* tail=NULL;
    while(minheap.size()>0){
        ListNode* tmp=minheap.top();
        minheap.pop();
        
         if(tmp->next!=NULL){
                minheap.push(tmp->next);
            }
        
        if(head==NULL){
            head=tmp;
            tail=tmp;
           
        }else{
            tail->next=tmp;
            tail=tmp;
           
        }
    }
    return head;
    }
};