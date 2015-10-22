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
    //双指针思想，两个指针相隔n-1，每次两个指针向后一步，当后面一个指针没有后继了，前面一个指针就是要删除的节点的前一个节点。
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *pre,*q,*p;
        pre=q=p=head;
        while(n--)
            p=p->next;
        while(p!=NULL){
            pre=q;
            q=q->next;
            p=p->next;
        }
        if(pre==q){
            head=pre->next;
            delete pre;
        }
        else{
            pre->next=q->next;
            delete q;
        }
        return head;
    }
};
