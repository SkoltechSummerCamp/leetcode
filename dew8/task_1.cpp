#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re;
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                int sum = nums[i]+nums[j];
                if (sum == target)
                    re = {i, j};  
            }
            
                
        }
        
        return re;    
    }
};

int main() {
    vector<int> test = {2,5,5,11};
    int target = 10;
    Solution TwoSum;
    vector<int> res = TwoSum.twoSum(test, target);
    std:cout << res[0] << res[1];
    return 0;
}
