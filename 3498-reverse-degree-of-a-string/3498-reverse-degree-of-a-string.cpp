class Solution {
public:
    int reverseDegree(string s) {
        
         int pos =0;
         int sum =0;
        for(int i =0;i<s.size();i++)
        {
           pos  = 'z' - s[i] + 1;
           sum  += pos * (i+1);
        }
        return sum;
    }
};