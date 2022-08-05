#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        size_t cnt = 0;
        for (size_t i = 0; i < prices.size(); i++) {
            if (prices[i] < prices[i + 1]) {
                cnt = cnt + prices[i + 1] - prices[i];
            }
        }
        return cnt;
    }
};
