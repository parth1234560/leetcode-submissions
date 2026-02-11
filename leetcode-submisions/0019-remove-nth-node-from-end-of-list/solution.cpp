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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*count=head;
        int count_int=0;
        while(count!=NULL){
            count_int++;
            count=count->next;
        }
        if(count_int==n){
            return head->next;
        }
        if(count_int==1 && n==0){
            return NULL;
        }

        ListNode* ptr=head;
        n=count_int-n+1;

        for(int i=1;i<n-1;i++){
            ptr=ptr->next;
        }
        if(ptr->next!=NULL ){
        ptr->next=ptr->next->next;
        }
        

        return head;
    }
};
