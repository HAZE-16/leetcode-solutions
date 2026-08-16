class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> st;
        for(int num : candyType)
        {
            st.insert(num);
        } 
        int m = st.size();

         return min(m,n/2);
    }
};