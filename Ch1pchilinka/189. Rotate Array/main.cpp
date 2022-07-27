#include <iostream>
#include <vector>

class Solution {
public:
  void reverse(std::vector<int> &arr, int l, int r) {
    for (int i = l; 2 * l < l + r; l++, r--) {
      std::swap(arr[l], arr[r]);
    }
  }
  void rotate(std::vector<int> &nums, int k) {
    int n = static_cast<int>(nums.size());
    k %= n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
  }
};

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> v[i];
  }
  std::cout << "\n";
  Solution s;
  s.rotate(v, k);
  for (int i = 0; i < n; ++i) {
    std::cout << v[i] << " ";
  }
  return 0;
}
