#include <iostream>
#include <algorithm>

class Solution {
public:
  int reverse(int x) {
    if (x == (1 << 31)) {
      return 0;
    };
    bool sign;
    x > 0 ? sign = true : (sign = false, x = -x);
    int ans = 0;
    while (x) {
      if (ans > 214748364) {
        return 0;
      }
      ans *= 10;
      ans += (x % 10);
      x /= 10;
    }
    if (sign) {
      return ans;
    }
    return -ans;
  }
};
