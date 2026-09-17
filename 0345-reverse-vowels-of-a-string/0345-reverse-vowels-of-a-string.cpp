class Solution {
public:
    bool isVowel(string &s, int i)
{
    char ch = tolower(s[i]);

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}
    string reverseVowels(string s) {
        int n  = s.size();
        int i =0;
        int j = n-1;
        while(i < j)
        {
           if(!isVowel(s,i))
           {
            i++;
           }
           else if(!isVowel(s,j))
           {
            j--;
           }
           else{
            swap(s[i],s[j]);
            i++;
            j--;
           }
        }
        return s;
    }
};