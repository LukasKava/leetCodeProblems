class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> answer;
        std::string         tmp_string;
        for (int i = 1; i <= n; i++)
        {
            tmp_string = "";
            if (i % 3 == 0)
                tmp_string += "Fizz";
            if (i % 5 == 0)
                tmp_string += "Buzz";
            if (tmp_string.empty())
                tmp_string = to_string(i);
            answer.push_back(tmp_string);
        }
        return (answer);
    }
};