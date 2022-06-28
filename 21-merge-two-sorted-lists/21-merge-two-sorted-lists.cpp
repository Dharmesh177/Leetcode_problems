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
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        //we will return this becuase this is our head 
        ListNode* temp=list1;
        if(list1->val > list2->val){
            temp=list2;
            list2=list2->next;
        }else{
            list1=list1->next;
        }
        
        //now we add rest of the node by comparing into the tail of our final head
        ListNode* tmp=temp;
        while(list1 && list2){
            if(list1->val < list2->val){
                tmp->next=list1;
                list1=list1->next;
            }else{
                tmp->next=list2;
                list2=list2->next;
            }
            tmp=tmp->next;
        }
        if(!list1){
            tmp->next=list2;
        }else{
            tmp->next=list1;
        }
        return temp;
    }
};