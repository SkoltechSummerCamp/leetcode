#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
  void rotate(std::vector<std::vector<int>> &matrix) {
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; 2 * j < n - 1; ++j) {
        std::swap(matrix[i][j], matrix[i][n - j - 1]);
      }
    }
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n - i; ++j) {
        std::swap(matrix[i][j], matrix[n - j - 1][n - i - 1]);
      }
    }
  }
};
