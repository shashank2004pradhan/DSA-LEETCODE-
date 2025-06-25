class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //currentsum = cs
        //maxsum =ms

        int cs = 0;
        int ms = INT_MIN;

        for(int val : nums){
            cs = cs + val;
            ms = max(cs,ms);
            if(cs<0){
                cs =0;
            }
        }
        return ms;








        
    }
};