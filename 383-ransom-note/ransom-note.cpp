class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) {return (false);}
        int lowercases[26] = {0};
        for (int i = 0; magazine[i] != '\0'; i++)
        {
            lowercases[magazine[i] - 'a']++;
        }
        for (int i = 0; ransomNote[i] != '\0'; i++)
        {
            lowercases[ransomNote[i] - 'a']--;
            if (lowercases[ransomNote[i] - 'a'] < 0)
                return (false);
        }
        return (true);
    }
};