class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int front = 0;
        int end = nums.size() - 1;
        while (front <= end) {
            if ( nums[front] == val ) {
                nums[front] = nums[end];
                end--;
            } else {
                front++;
            }
        }
        for( int x = 0; x < nums.size(); x++) {
            std::cout << nums[x] << " , ";
        }
        std::cout << std::endl;
        return (front);
}
};