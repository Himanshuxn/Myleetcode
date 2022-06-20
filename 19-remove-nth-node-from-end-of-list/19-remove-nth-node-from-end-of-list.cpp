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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    if(!head)
    return NULL;
    ListNode* dummy = new ListNode(0);
      dummy->next = head;
    ListNode* p = head;
      ListNode* q = dummy;
    for(int i = 1;i<n;i++)
    {
      p = p->next;
    }
    while(p->next)
    {
      p = p->next;
      q = q->next;
    }
      q->next = q->next->next;
      return dummy->next;
    }
};