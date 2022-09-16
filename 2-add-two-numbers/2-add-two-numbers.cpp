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
   ListNode*  addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
       ListNode* head=NULL;
        ListNode* tail=NULL;
        int carry=0;
        while(l1 || l2)
        {
            int v1=l1?l1->val:0;
            int v2=l2?l2->val:0;
            int sum=v1+v2+carry;
            carry=sum/10;
            int va=sum%10;
            ListNode* newnode=new ListNode(va);
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        if(carry>0)
        {
             ListNode* newnode=new ListNode(carry);
            tail->next=newnode;
        }
        return head;
    }
};