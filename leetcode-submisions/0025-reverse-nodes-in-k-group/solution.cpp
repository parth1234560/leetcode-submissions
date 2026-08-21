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
    ListNode* kth_finder(ListNode* temp,int k){
        k=k-1;
        while(temp!=NULL && k>0){
            temp=temp->next;
            k--;
        }

        return temp;

    }
    void reverse(ListNode* temp){
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* nextNode=temp->next;
            temp->next=NULL;
            if(prev){
                temp->next=prev;
            }
            prev=temp;
            temp=nextNode;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode* kthNode=kth_finder(temp,k);
            if(kthNode==NULL){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            reverse(temp);
            if(prev!=NULL){
                prev->next=kthNode;
            }
            prev=temp;
            if(temp==head){
                head=kthNode;
            }
            temp->next=nextNode;
            temp=nextNode;
        }
        return head;
        
    }
};
