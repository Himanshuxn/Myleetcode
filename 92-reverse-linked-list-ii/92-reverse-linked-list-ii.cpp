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
    ListNode* reverse(ListNode* head, int left, int right) {
         ListNode *curr=head;
          ListNode *next=NULL;
          ListNode *prev=NULL;
      while(curr && left<=right)
      {
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
          left++;
      }
        head->next=next;
        return prev;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    if(!head || !head->next)
        return head;
     ListNode* dummy = new ListNode(0,head);
     ListNode* p=dummy;
      for(int i=0;i<left-1;i++)
      {
          p=p->next;
      }
      p->next=reverse(p->next,left,right);
      return dummy->next;
    }
};