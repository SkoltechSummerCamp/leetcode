#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i)
            mp[nums[i]] = i;

        for (int i = 0; i < nums.size(); ++i)
            if (mp.find(target - nums[i]) != mp.end() && mp[target - nums[i]] != i) {
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
                break;
            }
        return ans;
    }
};


int main(){

    vector<int> vec = {2,7,11,15};
    int t = 9;

    Solution s;
    vector<int> ans = s.twoSum(vec, t);
    std::cout << ans[0] << ans[1];

    return 0;
}