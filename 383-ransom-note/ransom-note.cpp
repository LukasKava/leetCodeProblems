class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.size() < ransomNote.size())
            return (false);
        int lowercases[32] = {0};
        for (int i = 0; ransomNote[i] != '\0'; i++)
        {
            lowercases[ransomNote[i] - 97]++;
        }
        for (int i = 0; magazine[i] != '\0'; i++)
        {
            lowercases[magazine[i] - 97]--;
        }

        for (int i = 0; i < 32; i++)
        {
            if (lowercases[i] > 0)
                return (false);
        }
        return (true);
    }
};