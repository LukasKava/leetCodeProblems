class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 1;
        for (int index = 1; index < nums.size(); index++) {
            if (nums[index] != nums[index - 1 ]) {
                nums[x] = nums[index];
                x++;
            }
        }
        return (x);
    }
};