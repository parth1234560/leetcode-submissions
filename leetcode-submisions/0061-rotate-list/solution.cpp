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
            count+=1;
            ptr=ptr->next;
        }

        count++;
        if(head->next->next==NULL ){
            if(k>0 && k%count!=0){
            ListNode* prv=head->next;
            prv->next=head;
            head->next=NULL;
            head=prv;
            }
            return head;
        }
        if(k>count){
            k=k%count;
        }
        k=count-k+1;
    ListNode*end=ptr;
        ptr=head;

        for(int i=1;i<k-1;i++){
            ptr=ptr->next;
        }
        if(k>1){
        end->next=head;
        head=ptr->next;
        ptr->next=NULL;

            }    return head;
    }
};
