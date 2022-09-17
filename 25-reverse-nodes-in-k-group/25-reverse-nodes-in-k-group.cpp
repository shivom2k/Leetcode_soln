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
    
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        
        ListNode* head3=reverse(head->next);
        ListNode* temp=head3;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        head->next=NULL;
        return head3;
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        ListNode* head1=head;
        ListNode* tail1=head;
        for(int i=1; i<k;i++)
        {
            if(tail1== NULL)
            {
                return head1;
            }
            tail1=tail1->next;
        }
        if(tail1==NULL)
        {
            return head1;
        }
         ListNode* head3=tail1->next;
        tail1->next=NULL;
         ListNode* head2=reverse(head1);
        ListNode* temp1=head2;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
      
        ListNode* head4=reverseKGroup(head3,k);
        temp1->next=head4;
        return head2;
        
        
    }
};