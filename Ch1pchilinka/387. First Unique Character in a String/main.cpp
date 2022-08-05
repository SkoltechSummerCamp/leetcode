#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Solution {
public:
  int firstUniqChar(std::string s) {
      size_t n = s.size();
      std::vector<std::pair<int, int>> abc(26);
      std::fill(abc.begin(), abc.end(), std::pair<int, int>(0, 0));
      for (size_t i = 0; i < n; ++i) {
        abc[s[i] - 'a'].first++;
        abc[s[i] - 'a'].second = i;
      }
      for (size_t i = 0; i < n; ++i) {
        if (abc[s[i] - 'a'].first == 1) {
          return abc[s[i] - 'a'].second;
        }
      }
      return -1;
  }
};