class Solution {
public:

    void recurPerms(int idx,vector<int>&nums,  vector<vector<int>>&ans){
        //base case
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            //swap for inclusion
            swap(nums[idx],nums[i]);
            //inc of idx
            recurPerms(idx+1,nums,ans);
            //backtracking
            swap(nums[idx],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        recurPerms(0,nums,ans);
        return ans;
        
    }
};