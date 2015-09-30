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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=head;
        while(p){
            ListNode* q=p->next;
            if(q&&p->val==q->val){
                p->next=q->next;
                free(q);
            }
            else
                p=p->next;
        }
        return head;
    }
};
