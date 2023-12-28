class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return (false);
        }
        int64_t count = 0;
        for (int tmp_nbr = x; tmp_nbr != 0; tmp_nbr /= 10)
        {
            count = count * 10 + (tmp_nbr % 10);
        }
        if (count == x)
            return (true);
        else
            return (false);
    }
};