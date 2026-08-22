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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        ListNode* ptr=head;
        while(ptr->next!=NULL){
            count++;
            ptr=ptr->next;
        }
        count++;
        k=k%count;
        ptr->next=head;
        count=count-k;
        ptr=head;
        while(count>1){
            ptr=ptr->next;
            count--;
        }
        head=ptr->next;
        ptr->next=NULL;
        return head;
    }
};
