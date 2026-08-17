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
        //M-1-->
        // unordered_map<ListNode*,int>mp;
        // ListNode* temp1=headA;
        // ListNode* temp2=headB;
        // while(temp1!=NULL){
        //     mp[temp1]++;
        //     temp1=temp1->next;
        // }
        // while(temp2!=NULL){
        //     if(mp[temp2]){
        //         return temp2;
        //     }
        //     temp2=temp2->next;
        // }
        // return NULL;
        //M2-->
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1!=t2){
            if(t1==NULL){
                t1=headB;
            }
            else{
            t1=t1->next;
            }
            if(t2==NULL){
                t2=headA;
            }
            else{
            t2=t2->next;
            }
        }
        return t2;
    }
};
