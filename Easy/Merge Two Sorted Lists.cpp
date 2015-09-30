/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;

        ListNode* head;
        ListNode* t;
        ListNode* insert;
        if(l1->val>l2->val){
            t=head=l2;
            insert=l1;
        }
        else{
            t=head=l1;
            insert=l2;
        }
        while(insert!=NULL){
            ListNode* q=head->next;
            while(q&&insert->val>q->val){
                 head=head->next;
                 q=head->next;
            }


            ListNode* p=insert;
            insert=insert->next;

            head->next=p;
            p->next=q;

        }

        return t;
    }
};
