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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)
            return head;
        while(head!=NULL){
            if(head->val==val){
                ListNode *t=head;
                head=head->next;
                delete t;
            }
            else
                break;
        }
        ListNode *p=head;
        while(p!=NULL){
            ListNode *q=p->next;
            if(q){
                if(q->val==val){
                    p->next=q->next;
                    delete q;
                    continue;
                }
            }
            p=p->next;
        }
        return head;
    }
};
