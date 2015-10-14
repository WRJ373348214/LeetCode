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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB)
            return NULL;
        int lenA=1,lenB=1;
        ListNode *pA=headA,*pB=headB;
        while(pA->next!=NULL){
            lenA++;
            pA=pA->next;
        }
        while(pB->next!=NULL){
            lenB++;
            pB=pB->next;
        }
        if(pA!=pB)
            return false;
        ListNode *longer,*shorter;
        int d;
        if(lenA>lenB){
            longer=headA;
            shorter=headB;
            d=lenA-lenB;
        }
        else{
            longer=headB;
            shorter=headA;
            d=lenB-lenA;
        }
        for(int i=0;i<d;i++)
            longer=longer->next;
        while(1){
            if(longer==shorter)
                return longer;
            else{
                shorter=shorter->next;
                longer=longer->next;
            }
        }
    }
};
