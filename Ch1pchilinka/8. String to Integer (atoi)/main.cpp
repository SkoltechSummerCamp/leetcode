#include <iostream>
#include <string>

class Solution {
public:
  int myAtoi(std::string s) {
    bool sign = true;
    size_t n = s.size();
    int ans = 0;
    int sign_pos = 0;
    while (s[sign_pos] == ' ') {
      sign_pos++;
    }
    if (s[sign_pos] == '-') {
      sign = false;
      sign_pos++;
    } else if (s[sign_pos] == '+') {
      sign_pos++;
    }
    for (size_t i = sign_pos; i < n; ++i) {
      if (s[i] >= '0' && s[i] <= '9') {
        if (ans > 214748364) {
          if (sign) {
            return 2147483647;
          } else {
            return -2147483648;
          }
        }
        if (ans == 214748364) {
          if ((s[i] - '0') >= 8 && sign) {
            return 2147483647;
          }
          if ((s[i] - '0') >= 8 && !sign) {
            return -2147483648;
          }
        }
        ans *= 10;
        ans += (s[i] - '0');
      } else {
        if (sign) {
          return ans;
        } else {
          return -ans;
        }
      }
    }
    if (sign) {
      return ans;
    } else {
      return -ans;
    }
  }
};