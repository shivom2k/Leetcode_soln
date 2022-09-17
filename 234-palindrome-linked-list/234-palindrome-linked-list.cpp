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
        
     // ListNode* head1=reverseList(head->next);
     //    ListNode* temp=head1;
     //    while(temp->next!=NULL)
     //    {
     //        temp=temp->next;
     //    }
     //    temp->next=head;
     //    head->next=NULL;
     //    return head1;
      ListNode* prev=NULL;
      ListNode* curr=head;
       ListNode* next=head->next;  
       while(next!=NULL)
       {
           curr->next=prev;
           prev=curr;
           curr=next;
           next=next->next;
       }
        curr->next=prev;
        return curr;
        
    }
    bool isPalindrome(ListNode* head) {
      ListNode* slow=head;
    ListNode* fast=head;
        while(fast !=NULL &&fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        ListNode* head1=reverse(temp);
        slow->next=head1;
        slow=slow->next;
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
            {
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};