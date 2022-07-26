#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  int singleNumber(std::vector<int>& nums) {
      int ans = 0;
      for (auto & el : nums) {
        ans ^= el;
      }
      return ans;
  }
};

int main() {
  int n;
  std::cin >> n;
  std::vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> v[i];
  }
  Solution s;
  std::cout << s.singleNumber(v);
  return 0;
}
