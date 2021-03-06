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
    int getDecimalValue(ListNode* head) {
     
        ListNode* temp;
        temp=head;
        int flage=0, l=0, ans=0;
        if(head==NULL) return 0;
        while(head!=NULL){
            head=head->next;
            l++;
        }l=l-1;
        while( temp!=NULL){
            int d=temp->val;
            ans+=d*pow(2,l);
            l--;
            temp=temp->next;
        }
        return ans;
    }
};