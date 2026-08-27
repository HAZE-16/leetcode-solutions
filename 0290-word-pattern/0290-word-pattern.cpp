class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> t;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                t.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        t.push_back(word);

        if (pattern.size() != t.size()) {
            return false;
        }

        unordered_map<char, string> mp1;
        unordered_map<string,char> mp2;
        for (int i = 0; i < t.size(); i++) 
        {
            if (mp1.find(pattern[i]) != mp1.end()) 
            {
                if (mp1[pattern[i]] != t[i]) {
                    return false;
                }
            }

            if(mp2.find(t[i]) != mp2.end())
            {
                if(mp2[t[i]] != pattern[i])
                {
                    return false;
                }
            }

            mp1[pattern[i]] = t[i];
            mp2[t[i]] = pattern[i];
        }
        return true;
    }
};