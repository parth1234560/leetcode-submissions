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
    ListNode* oddEvenList(ListNode* head) {
        //M1->via data changing-->
    //     if(head==NULL || head->next==NULL){
    //         return head;
    //     }
    //     vector<int>arr;
    //     ListNode* temp=head;
    //     ListNode* temp2=head->next;
    //     while(temp!=NULL){
    //         arr.push_back(temp->val);
    //         if(temp->next!=NULL){
    //         temp=temp->next->next;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     while(temp2!=NULL){
    //         arr.push_back(temp2->val);
    //         if(temp2->next!=NULL){
    //         temp2=temp2->next->next;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     temp=head;
    //     int i=0;
    //     while(temp!=NULL){
    //         if(i<arr.size()){
    //         temp->val=arr[i++];
    //         }
    //         temp=temp->next;
    //     }
    //     return head;
    // }
    //M2->More Optimized via Link Changing-->
    if(head==NULL || head->next==NULL){return head;}
    ListNode* temp=head;
    ListNode* temp2=head->next;
    ListNode* evenHead=temp2;
    while(temp2!=NULL && temp2->next!=NULL){
        temp->next=temp->next->next;
        temp=temp->next;
        temp2->next=temp2->next->next;
        temp2=temp2->next;
    }
    temp->next=evenHead;
    return head;
    }
};
