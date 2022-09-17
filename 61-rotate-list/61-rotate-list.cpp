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
    
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL)
        {
            return NULL;
        }
          int len=length(head);
                k=k%len;
        if(k==0)
        {
            return head;
        }
        
      
 
        int pos=len-k;
        ListNode* temp=head;
        for(int i=1;i<pos;i++)
        {
            temp=temp->next;
        }
          ListNode* head1=temp->next;
        temp->next=NULL;
         ListNode* temp1=head1;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=head;
        return head1;
        
        
    }
};