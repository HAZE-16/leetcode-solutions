class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
 long long sum = 0;
        for(int i =0;i<n;i++)
        {
            long long subarraysum = 0;
            for(int j =i;j<n;j++)
            {
                subarraysum += arr[j];
                if((j - i +1 ) % 2 != 0)
                {
                    sum += subarraysum;
                }
            }
        }
        return sum;
    }
};