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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = new ListNode(0);
      ListNode* p = l3;
      int carry = 0;
      while(l1 || l2 || carry)
      {
        int sum =(l1?l1->val:0) +(l2?l2->val:0) + carry;
        carry = sum/10;
        sum = sum%10;
        p->next = new ListNode(sum);
        p = p->next;
        l2=l2?l2->next:l2;
        l1=l1?l1->next:l1;
      }
    return l3->next;
    }
};
