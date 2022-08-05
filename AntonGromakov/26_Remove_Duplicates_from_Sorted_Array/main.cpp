class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t cnt = 1;
        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i+1]) {
                nums[cnt++] = nums[i+1];
            }
        }
        return cnt;
    }
};
