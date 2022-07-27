#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    int n = nums.size();
    std::sort(nums.begin(), nums.end(), std::greater());
    for (int i = 0; i < n - 1; ++i) {
      if (nums[i] == nums[i + 1]) {
        return true;
      }
    }
    return false;
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
  s.containsDuplicate(v) ? std::cout << "true" : std::cout << "false";
  return 0;
}
