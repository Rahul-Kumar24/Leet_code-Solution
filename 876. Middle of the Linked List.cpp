//876. Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        
        
        if(head->next==NULL) return head;
        if(head->next->next==NULL)return head->next;
        
        ListNode *temp = head;
        ListNode *temp1 = head;
        int c=0;
        while(head!=nullptr){
            c++;
            head=head->next;
        }
        while (temp1->next!=NULL&& temp1->next->next!= NULL ){
            temp=temp->next;
            temp1=temp1->next->next;
         
        }
        if(c%2==0)return temp->next;
        return temp;
    }
};