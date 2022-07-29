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
  ListNode *reverseList(ListNode *head) {
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
  bool isPalindrome(ListNode *head) {
    int n = 0;
    ListNode *now = head;
    ListNode *right_side = nullptr;
    ListNode *left_side = nullptr;
    while (now != nullptr) {
      now = now->next;
      n++;
    }
    if (n == 0 || n == 1) {
      return true;
    }
    now = head;
    if (n % 2 == 0) {
      n /= 2;
      while (--n) {
        now = now->next;
      }
      right_side = now->next;
      now->next = nullptr;
      left_side = reverseList(head);
      while (right_side != nullptr) {
        if (left_side->val != right_side->val) {
          return false;
        }
        left_side = left_side->next;
        right_side = right_side->next;
      }
    } else {
      n /= 2;
      while (--n) {
        now = now->next;
      }
      right_side = now->next->next;
      now->next = nullptr;
      left_side = reverseList(head);
      while (right_side != nullptr) {
        if (left_side->val != right_side->val) {
          return false;
        }
        left_side = left_side->next;
        right_side = right_side->next;
      }
    }
    return true;
  }
};
