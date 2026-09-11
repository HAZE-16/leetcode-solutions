class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        set<int> st;

        for(int i = 0; i < digits.size(); i++) {
            for(int j = i + 1; j < digits.size(); j++) {
                for(int k = j + 1; k < digits.size(); k++) {

                    vector<int> temp = {digits[i], digits[j], digits[k]};

                    sort(temp.begin(), temp.end());

                    do {
                        int num = temp[0] * 100
                                + temp[1] * 10
                                + temp[2];

                        if(num >= 100 && num % 2 == 0) {
                            st.insert(num);
                        }

                    } while(next_permutation(temp.begin(), temp.end()));
                }
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};