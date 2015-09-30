
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
    ListNode* reverseList(ListNode* head) {
        stack<int> sta;
        ListNode* p=head;
        while(p){
            sta.push(p->val);
            p=p->next;
        }
        p=head;
        while(p){
            p->val=sta.top();
            sta.pop();
            p=p->next;
        }
        return head;
    }
};
