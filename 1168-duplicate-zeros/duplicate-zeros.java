class Solution {
    public void duplicateZeros(int[] arr) {
        int tmp = 0;
        for (int i = 0; i < arr.length; i++)
        {
            if (arr[i] == 0)
            {
                for (int x = arr.length - 2; x >= i; x--)
                {
                    arr[x + 1] = arr[x];
                }
                i++;
            }
        }
    }
}