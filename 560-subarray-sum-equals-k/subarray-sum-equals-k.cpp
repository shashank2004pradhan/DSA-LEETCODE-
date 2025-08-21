class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int presum = 0;
        int cnt = 0;

        for(int i =0;i<nums.size();i++){
            presum += nums[i];
            int remove = presum - k;
            cnt = cnt + mp[remove];
            mp[presum] = mp[presum] + 1;

        }
        return cnt;
        
    }
};