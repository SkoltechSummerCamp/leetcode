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
  bool hasCycle(ListNode *head) {
    if (head == nullptr) {
      return false;
    }
    ListNode *first_ptr = head;
    ListNode *second_ptr = head;
    while (true) {
      if (second_ptr->next == nullptr) {
        return false;
      }
      first_ptr = first_ptr->next;
      second_ptr = second_ptr->next;
      if (second_ptr->next == nullptr) {
        return false;
      }
      second_ptr = second_ptr->next;
      if (first_ptr == second_ptr) {
        return true;
      }
    }
  }
};
