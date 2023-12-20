class Solution {
    public int findNumbers(int[] nums) {
        int result = 0;
        int count = 0;
        for (int index : nums)
        {
            for (int x = index; x != 0; x /= 10)
                count++;
            if (count % 2 == 0 && count != 0)
               result++;
            count = 0;
        }
        return (result);
    }
}