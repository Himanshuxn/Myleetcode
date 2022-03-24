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
   ListNode* mergesort(ListNode* r,ListNode* q)
    {
      if(r==NULL)
      return q;
      if(q==NULL)
      return r;
      if(r->val>=q->val)
      {
        q->next=mergesort(r,q->next);
        return q;
      }
        else{
        r->next=mergesort(r->next,q);
        return r;
        }
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* p=head;
        ListNode* q=head;
        ListNode* temp=NULL;
       while(p&&p->next)
       {
        p=p->next->next;
        temp=q;
        q=q->next;
       }
        p=head;
        temp->next=NULL;
        ListNode* l1=sortList(p);
        ListNode* l2=sortList(q);
        return mergesort(l1,l2);
    }
};