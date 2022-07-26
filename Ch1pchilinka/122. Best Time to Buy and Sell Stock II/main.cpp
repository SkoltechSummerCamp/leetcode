#include <iostream>
#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int>& prices) {
      bool flag = true;
      int n = prices.size(), profit = 0, buy = 0;
      for (int i = 0; i < n - 1; ++i) {
        if (flag) {
          if (prices[i + 1] > prices[i]) {
            buy = prices[i];
            flag = false;
          }
        } else {
          if (prices[i + 1] < prices[i]) {
            profit += (prices[i] - buy);
            buy = 0;
            flag = true;
          }
        }
      }
      if (prices[n - 1] > buy && !flag) {
        profit += prices[n - 1] - buy;
      }
      return profit;
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
  std::cout << s.maxProfit(v);
  return 0;
}
