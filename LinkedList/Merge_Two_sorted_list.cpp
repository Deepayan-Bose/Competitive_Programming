//recursive approach
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode *curr;
        if(list1->val<=list2->val) {
            curr=list1;
            curr->next=mergeTwoLists(list1->next,list2);
        }
        else {
            curr=list2;
            curr->next=mergeTwoLists(list1,list2->next);
        }
        return curr;
    }
};
//iterative approach

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* ptr=list1;
        if(list1->val<=list2->val){
            ptr=list1;
            list1=list1->next;
        }
        else{
            ptr=list2;
            list2=list2->next;
        }
        ListNode* curr=ptr;
        while(list1 and list2){
            if(list1->val<=list2->val){
                curr->next=list1;
                list1=list1->next;
            }
            else{
                curr->next=list2;
                list2=list2->next;
            }
            curr=curr->next;
        }
        while(list1){
            curr->next=list1;
            list1=list1->next;
            curr=curr->next;
        }
        while(list2){
            curr->next=list2;
            list2=list2->next;
            curr=curr->next;
        }
        return ptr;
    }
