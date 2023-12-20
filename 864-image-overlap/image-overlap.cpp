class Solution {
public:
    vector<std::array<int, 2>> checkOnes(vector<vector<int>>& img)
    {
        std::vector<std::array<int, 2>> ones_positions;
        for (int i = 0; i < img.size(); i++)
        {
            for (int x = 0; x < img[i].size(); x++)
            {
                if (img[i][x] == 1)
                {
                    ones_positions.push_back({i, x});
                }
            }
        }
        return (ones_positions);
    }

    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int actual_max = 0;
        std::vector<std::array<int, 2>> pos_img1 = checkOnes(img1);
        std::vector<std::array<int, 2>> pos_img2 = checkOnes(img2);
        
        std::array<int, 2> tmp_cordinate;
        std::map<std::array<int, 2>, int>   pos_move_count;
        for (std::vector<std::array<int, 2>>::iterator it_1 = pos_img1.begin(); it_1 != pos_img1.end(); it_1++)
        {
            for (std::vector<std::array<int, 2>>::iterator it_2 = pos_img2.begin(); it_2 != pos_img2.end(); it_2++)
            {
                //we take the difference from arrays
                tmp_cordinate = {(*it_2)[0] - (*it_1)[0], (*it_2)[1] - (*it_1)[1]};
                pos_move_count[tmp_cordinate]++;
            }
        }

        for (std::map<std::array<int, 2>, int>::iterator it = pos_move_count.begin(); it != pos_move_count.end(); it++)
        {
            if (it->second > actual_max)
                actual_max = it->second;
        }
        return (actual_max);
    }
};