class Solution {
public:
    vector<pair<int, int>> checkOnes(vector<vector<int>>& img)
    {
        std::vector<pair<int, int>> ones_positions;
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
        std::vector<pair<int, int>> pos_img1 = checkOnes(img1);
        std::vector<pair<int, int>> pos_img2 = checkOnes(img2);
        
        std::map<pair<int, int>, int>   pos_move_count;
        for (std::vector<pair<int, int>>::iterator it_1 = pos_img1.begin(); it_1 != pos_img1.end(); it_1++)
        {
            for (std::vector<pair<int, int>>::iterator it_2 = pos_img2.begin(); it_2 != pos_img2.end(); it_2++)
            {
                //we take the difference from arrays
                pos_move_count[{it_2->first - it_1->first, it_2->second - it_1->second}]++;
            }
        }

        for (std::map<pair<int, int>, int>::iterator it = pos_move_count.begin(); it != pos_move_count.end(); it++)
        {
            if (it->second > actual_max)
                actual_max = it->second;
        }
        return (actual_max);
    }
};