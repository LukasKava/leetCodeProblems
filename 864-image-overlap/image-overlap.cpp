class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int actual_max = 0;
        std::vector<pair<int, int>> pos_img1;
        std::vector<pair<int, int>> pos_img2;
        
        for (int i = 0; i < img1.size(); i++)
        {
            for (int x = 0; x < img1.size(); x++)
            {
                if (img1[i][x] == 1)
                    pos_img1.push_back({i, x});
                if (img2[i][x] == 1)
                    pos_img2.push_back({i, x});
            }
        }

        std::unordered_map<int, int>   move_count;
        for (std::vector<pair<int, int>>::iterator it_1 = pos_img1.begin(); it_1 != pos_img1.end(); it_1++)
        {
            for (std::vector<pair<int, int>>::iterator it_2 = pos_img2.begin(); it_2 != pos_img2.end(); it_2++)
            {
                //we take the difference from arrays

                move_count[(it_2->first - it_1->first) * 100 + (it_2->second - it_1->second)]++;
            }
        }

        for (std::unordered_map<int, int>::iterator it = move_count.begin(); it != move_count.end(); it++)
        {
            if (it->second > actual_max)
                actual_max = it->second;
        }
        return (actual_max);
    }
};