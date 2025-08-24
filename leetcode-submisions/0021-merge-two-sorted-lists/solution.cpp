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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3=NULL;
        ListNode* ptr=list3;
        while(list1 && list2){
            int x=min(list1->val,list2->val);
            if(x==list1->val){list1=list1->next;}
            else{list2=list2->next;}
            ListNode* new_node=new ListNode(x,NULL);
            if(ptr==NULL){
                ptr=new_node;
                list3=new_node;

            }
            else{
                ptr->next=new_node;
                ptr=new_node;
            }
        }
        while(list1){

            ListNode* new_node=new ListNode(list1->val);
            list1=list1->next;
            if(ptr==NULL){
                ptr=new_node;
                list3=new_node;

            }
            else{
                ptr->next=new_node;
                ptr=new_node;
            }

        }
        while(list2){
            ListNode* new_node=new ListNode(list2->val);
            list2=list2->next;
            if(ptr==NULL){
                ptr=new_node;
                list3=new_node;

            }
            else{
                ptr->next=new_node;
                ptr=new_node;
            }

        }
        return list3;
    }
};
