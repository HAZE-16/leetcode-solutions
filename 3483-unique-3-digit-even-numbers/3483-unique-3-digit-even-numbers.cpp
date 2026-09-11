class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        vector<int> ans;
        
        do{
            int num = 0;

            for(int i =0;i<3;i++)
            {
                num = num * 10 + digits[i];
            }

            if(num >= 100 && num % 2 == 0)
            {
                ans.push_back(num);
            }
        }while(next_permutation(digits.begin(),digits.end()));
        unordered_set<int> st;
         for(int x : ans)
         {
            st.insert(x);
         }
         int n = st.size();

         return n;
        
    }
};