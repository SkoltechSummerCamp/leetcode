#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  std::vector<int> plusOne(std::vector<int>& digits) {
     size_t n = digits.size();
     bool are_all_nines = true, adding = true;
     for (size_t i = 0; i < n; ++i) {
       if (digits[i] != 9) {
         are_all_nines = false;
       }
     }
     if (are_all_nines) {
       std::vector<int> ans(n + 1);
       std::fill(ans.begin(), ans.end(), 0);
       ans[0] = 1;
       return ans;
     }
     n--;
     while (adding) {
       if (digits[n] == 9) {
         digits[n--] = 0;
       } else {
         digits[n]++;
         adding = false;
       }
     }
     return digits;
  }
};