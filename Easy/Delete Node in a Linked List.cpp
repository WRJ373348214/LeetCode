/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//As for c/c++
//小心Memery leak!!
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * p=node->next;
        node->val=p->val;
        node->next=p->next;
        free(p);
    }
};
