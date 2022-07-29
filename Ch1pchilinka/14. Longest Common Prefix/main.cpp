#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::string longestCommonPrefix(std::vector<std::string> &strs) {
    std::string ans;
    ans = "";
    char common_now;
    size_t min_length = 1000, size_of_array = strs.size();
    for (size_t i = 0; i < size_of_array; ++i) {
      min_length = std::min(min_length, strs[i].size());
    }
    for (int i = 0; i < min_length; ++i) {
      common_now = strs[0][i];
      for (int j = 0; j < size_of_array; ++j) {
        if (strs[j][i] != common_now) {
          return ans;
        }
      }
      ans += common_now;
    }
    return ans;
  }
};