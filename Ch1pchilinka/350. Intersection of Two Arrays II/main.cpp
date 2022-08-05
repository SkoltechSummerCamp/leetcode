#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2) {
    size_t n, m;
    int i = 0, j = 0;
    std::vector<int> ans;
    n = nums1.size();
    m = nums2.size();
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    while (i < n && j < m) {
      if (nums1[i] == nums2[j]) {
        ans.emplace_back(nums1[i++]);
        j++;
      } else if (nums1[i] > nums2[j]) {
        j++;
      } else {
        i++;
      }
    }
    return ans;
  }
};

int main() {
  size_t n, m;
  std::cin >> n;
  std::vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> v[i];
  }
  std::cin >> m;
  std::vector<int> u(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> u[i];
  }
  Solution s;
  std::vector<int> ans;
  ans = s.intersect(v, u);
  for (size_t i = 0; i < ans.size(); ++i) {
    std::cout << ans[i] << " ";
  }
  return 0;
}