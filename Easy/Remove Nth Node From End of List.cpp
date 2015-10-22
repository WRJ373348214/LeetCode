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
    //˫ָ��˼�룬����ָ�����n-1��ÿ������ָ�����һ����������һ��ָ��û�к���ˣ�ǰ��һ��ָ�����Ҫɾ���Ľڵ��ǰһ���ڵ㡣
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
