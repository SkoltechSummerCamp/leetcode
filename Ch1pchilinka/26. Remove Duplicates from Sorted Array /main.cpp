#include <iostream>
#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int>& nums) {
    int ind = 1;
    int n = nums.size();
    for (int i = 0; i < n - 1; ++i) {
      if (nums[i] != nums[i + 1]) {
        nums[ind++] = nums[i + 1];
      }
    }
    return ind;
  }
};

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  Solution s;
  std::cout << s.removeDuplicates(arr) << "\n";

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  return 0;
}
