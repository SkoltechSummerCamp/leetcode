#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
  std::string correctForm(std::string s) {
      std::string ans_s;
      ans_s = "";
      size_t size_of_s = s.size();
      for (size_t i = 0; i < size_of_s; ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
          ans_s += s[i];
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
          ans_s += (s[i] - 'A' + 'a');
        }
      }
      std::cout << ans_s << "\n";
      return ans_s;
  }
  bool isPalindrome(std::string s) {
    std::string corr_s = correctForm(s);
    size_t size_of_corr_s = corr_s.size();
    for (size_t i = 0; 2 * i < size_of_corr_s; ++i) {
      if (corr_s[i] != corr_s[size_of_corr_s - i - 1]) {
        return false;
      }
    }
    return true;
  }
}