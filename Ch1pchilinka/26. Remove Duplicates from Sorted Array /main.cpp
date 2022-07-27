#include <iostream>
#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int>& nums) {
    int ind = 1;
    size_t n = nums.size();
    for (size_t i = 0; i < n - 1; ++i) {
      if (nums[i] != nums[i + 1]) {
        nums[ind++] = nums[i + 1];
      }
    }
    return ind;
  }
};

int main() {
  size_t n;
  std::cin >> n;
  std::vector<int> arr(n);
  for (size_t i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  Solution s;
  std::cout << s.removeDuplicates(arr) << "\n";

  for (size_t i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
