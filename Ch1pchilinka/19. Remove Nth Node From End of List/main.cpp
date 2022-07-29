#include <iostream>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
       ListNode *tail_ptr = head;
       ListNode *del_ptr = head;
       for (int i = 0; i < n; ++i) {
         tail_ptr = tail_ptr->next;
       }
       if (tail_ptr == nullptr) {
         return head->next;
       }
       while (tail_ptr->next != nullptr) {
         tail_ptr = tail_ptr->next;
         del_ptr = del_ptr->next;
       }
       del_ptr->next = del_ptr->next->next;
       return head;
  }
};
