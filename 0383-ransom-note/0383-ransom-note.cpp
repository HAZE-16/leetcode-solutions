class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if(magazine.size() < ransomNote.size())
        {
            return false;
        }
        unordered_map<char,int> mp;
        for(char ch : ransomNote)
        {
            mp[ch]++;
        }

        for(char ch : magazine)
        {
            if(mp[ch] > 0)
            {
            mp[ch]--;
            }
        }

        for(auto it : mp)         //for(char ch : ransomNote)
        {
            if(it.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};