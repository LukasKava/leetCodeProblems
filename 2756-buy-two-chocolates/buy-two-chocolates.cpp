class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first_chocolate[2] = {0, prices[0]};
        int second_chocolate[2] = {0, prices[0]};

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < first_chocolate[1])
            {
                first_chocolate[0] = i;
                first_chocolate[1] = prices[i];
            }
        }
        if (first_chocolate[0] == second_chocolate[0])
        {
            second_chocolate[0]++;
            second_chocolate[1] = prices[1];
        }

        for (int i = 0; i < prices.size(); i++)
        {
            if (i != first_chocolate[0])
            {
                if (prices[i] < second_chocolate[1])
                {
                    second_chocolate[0] = i;
                    second_chocolate[1] = prices[i];
                }
            }
        }
        std::cout << "first_chocolate: " << first_chocolate[0] << " " << first_chocolate[1] << std::endl;
        std::cout << "second_chocolate: " << second_chocolate[0] << " " << second_chocolate[1] << std::endl;
        return ((first_chocolate[1] + second_chocolate[1]) > money ? money : (money - (first_chocolate[1] + second_chocolate[1])));
    }
};