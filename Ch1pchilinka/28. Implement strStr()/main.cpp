#include <iostream>
#include <string>

class Solution {
public:
  bool StringOccur(std::string &s, std::string &l, int ind, size_t size) {
    size_t l_ind = 0;
    for (size_t i = ind; i < size + ind; ++i) {
      if (s[i] != l[l_ind++]) {
        return false;
      }
    }
    return true;
  }
  int strStr(std::string haystack, std::string needle) {
      size_t size_of_haystack = haystack.size();
      size_t size_of_needle = needle.size();
      if (size_of_haystack < size_of_needle) {
        return -1;
      }
      for (size_t i = 0; i < size_of_haystack - size_of_needle + 1; ++i) {
        if (StringOccur(haystack, needle, i, size_of_needle)) {
          return i;
        }
      }
      return -1;
  }
};