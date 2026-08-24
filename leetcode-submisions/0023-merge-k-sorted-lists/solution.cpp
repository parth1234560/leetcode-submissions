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
    /*ListNode* merge2Lists(ListNode* l1,ListNode* l2){
        ListNode* l3=nullptr;ListNode** p3=&l3;
        while(l1 && l2){
            if(l1->val<l2->val){
                *p3=l1;
                l1=l1->next;

            }
            else{
                *p3=l2;
                l2=l2->next;
            }
            p3=&((*p3)->next);
        }
        while(l1){
            *p3=l1;
            p3=&((*p3)->next);
            l1=l1->next;
        }
        while(l2){
            *p3=l2;
            
            l2=l2->next;
            p3=&((*p3)->next);
            
        }
        return l3;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n<=0){return nullptr;}
        ListNode* result=lists[0];
        for(int i=0;i<n-1;i++){
            result=merge2Lists(result,lists[i+1]);
        }
        return result;
    } Brute-Force*/


    //m2-> optimized
    // ListNode* merge2List(ListNode* l1,ListNode* l2){
    //     if(!l1){return l2;}
    //     if(!l2){return l1;}
    //         if(l1->val<l2->val){
    //             l1->next=merge2List(l1->next,l2);
    //             return l1;
    //         }
    //         else{
    //             l2->next=merge2List(l2->next,l1);
    //             return l2;
    //         }

            
    // }
    // ListNode* divide_and_conquer(vector<ListNode*>& lists,int start,int end){

    //     if(start<end){
    //         int mid=(start+end)/2;
    //         ListNode* l1=divide_and_conquer(lists,start,mid);
    //         ListNode* l2=divide_and_conquer(lists,mid+1,end);
    //         return merge2List(l1,l2);
    //     }
    //     else{
    //         return lists[start];
    //     }
    // }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //m3 -->optimal
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                pq.push({lists[i]->val,lists[i]});
            }
        }
        ListNode * dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(!pq.empty()){
            pair<int,ListNode*>p=pq.top();
            pq.pop();
            temp->next=p.second;
            if(p.second->next){
                pq.push({p.second->next->val,p.second->next});
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};
