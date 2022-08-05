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
  ListNode* reverseList(ListNode* head) {
    if (head == nullptr) {
      return head;
    }
     ListNode *new_head = head;
     ListNode *before_new_head = head->next;
     if (before_new_head == nullptr) {
       return head;
     }
     ListNode *before_before_new_head = before_new_head->next;
     head->next = nullptr;
     while (before_before_new_head != nullptr) {
       before_new_head->next = new_head;
       new_head = before_new_head;
       before_new_head = before_before_new_head;
       before_before_new_head = before_before_new_head->next;
     }
     before_new_head->next = new_head;
     new_head = before_new_head;
     return new_head;
  }
};
