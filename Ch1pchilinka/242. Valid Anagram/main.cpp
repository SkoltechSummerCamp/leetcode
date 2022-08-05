#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    size_t size_of_s = s.size();
    size_t size_of_t = t.size();
    if (size_of_s != size_of_t) {
      return false;
    }
    std::vector<std::pair<int, int>> abc(26);
    std::fill(abc.begin(), abc.end(), std::pair<int, int>(0, 0));
    for (size_t i = 0; i < size_of_s; ++i) {
      abc[s[i] - 'a'].first++;
      abc[t[i] - 'a'].second++;
    }
    for (size_t i = 0; i < 26; ++i) {
      if (abc[i].first != abc[i].second) {
        return false;
      }
    }
    return true;
  }
};