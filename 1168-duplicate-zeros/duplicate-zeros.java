class Solution {
    // public void duplicateZeros(int[] arr) {
    //     int tmp = 0;
    //     for (int i = 0; i < arr.length; i++)
    //     {
    //         if (arr[i] == 0)
    //         {
    //             for (int x = arr.length - 2; x >= i; x--)
    //             {
    //                 arr[x + 1] = arr[x];
    //             }
    //             i++;
    //         }
    //     }
    // }
    //BETTER SOLUTION
    public void duplicateZeros(int[] arr) {
        int possible_dups = 0;
        int length_ = arr.length - 1;
        
        //Find all the possible duplicating 0
        for (int i = 0; i <= length_ - possible_dups; i++)
        {
            if (arr[i] == 0)
            {
                if (i == length_ - possible_dups)
                {
                    arr[length_] = 0;
                    length_--;
                    break;
                }
                possible_dups++;
            }
        }
        
        int last_pos = length_ - possible_dups;
        // Copy zero twice, and non zero once.
        for (int i = last_pos; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + possible_dups] = 0;
                possible_dups--;
                arr[i + possible_dups] = 0;
            } else {
                arr[i + possible_dups] = arr[i];
            }
        }
    }
}