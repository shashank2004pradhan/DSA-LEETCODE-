class Solution {
public:
    int subarraySum(vector<int>& num, int k) {
        int n = num.size();
        int cnt = 0;

        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum += num[j];
                if(sum==k) cnt++;
            }

        }
        return cnt;
    }
};