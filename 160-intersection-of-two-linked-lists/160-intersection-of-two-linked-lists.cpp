/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
     ListNode *temp1=headA;
     ListNode *temp2=headB;
      ListNode *temp3=NULL;   
        if(temp1==NULL && temp2==NULL)
        {
            return NULL;
        }
        while(true)
        {
          // cout<<"heloo"<<endl;
            
            if(temp1==temp2)
            {
               
                return temp1;
            }
            temp1=temp1?temp1->next:headA;
            temp2=temp2?temp2->next:headB;
        }
        return NULL;
    }
};