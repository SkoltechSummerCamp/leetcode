#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  void moveZeroes(std::vector<int>& nums) {
    size_t n = nums.size();
    int num_of_zeros = 0;
    for (size_t i = 0; i < n; ++i) {
      if (nums[i] == 0) {
        num_of_zeros++;
      } else {
        std::swap(nums[i], nums[i - num_of_zeros]);
      }
    }
  }
};