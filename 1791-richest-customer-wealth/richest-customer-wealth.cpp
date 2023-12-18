class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        int line_sum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                line_sum += accounts[i][j];
            }
            if (line_sum > richest)
                richest = line_sum;
            line_sum = 0;
        }
        return (richest);
    }
};