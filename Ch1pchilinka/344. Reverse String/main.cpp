#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
  void reverseString(std::vector<char>& s) {
      size_t n = s.size();
      for (size_t i = 0; 2 * i < n; ++i) {
        std::swap(s[i], s[n - 1 - i]);
      }
  }
};