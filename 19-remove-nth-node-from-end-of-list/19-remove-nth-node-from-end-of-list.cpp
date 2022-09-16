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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len=length(head);
        ListNode* temp=head;
        int pos=len-n;
        if(pos==0)
        {
            return head->next;
        }
        int count=0;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
       ListNode* temp1=temp->next;
        temp->next=temp1->next;
        return head;
    }
};