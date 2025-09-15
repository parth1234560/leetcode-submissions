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
    ListNode* merge2List(ListNode* a1,ListNode* a2){
        if(!a1){return a2;}
        if(!a2){return a1;}
        if(a1->val<a2->val){a1->next=merge2List(a1->next,a2);return a1;}
        else{a2->next=merge2List(a2->next,a1);return a2;}
    }
    ListNode* divide_conquer(vector<ListNode*>& lists,int start,int high){
        if(start<high){
            int mid=start+(high-start)/2;
            ListNode* l1=divide_conquer(lists,start,mid);
            ListNode* l2=divide_conquer(lists,mid+1,high);
            return merge2List(l1,l2);
        }
        else{
            return lists[start];
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){return nullptr;}
        if(lists.size()==1){return lists[0];}
        return divide_conquer(lists,0,lists.size()-1);
    }
};
