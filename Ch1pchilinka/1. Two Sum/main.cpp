#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    size_t n = nums.size(), k, l;
    std::vector<std::pair<int, int>>  nums_v_ind(n);
    std::vector<int> ans(2);
    for (size_t i = 0; i < n; ++i) {
      nums_v_ind[i] = std::pair(nums[i], i);
    }
    std::sort(nums_v_ind.begin(), nums_v_ind.end());
    ans[0] = nums_v_ind[0].second;
    ans[1] = nums_v_ind[n - 1].second;
    k = 0;
    l = n - 1;
    while (nums_v_ind[k].first + nums_v_ind[l].first != target) {
        if (nums_v_ind[k].first + nums_v_ind[l].first > target) {
          l--;
          ans[1] = nums_v_ind[l].second;
        } else if (nums_v_ind[k].first + nums_v_ind[l].first < target) {
          k++;
          ans[0] = nums_v_ind[k].second;
        }
    }
    return ans;
  }
};