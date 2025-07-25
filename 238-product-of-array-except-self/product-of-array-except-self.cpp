class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n,1);
        // vector<int> prefix(n,1);
        // vector<int> suffix(n,1);

        //prefix o(n) => ans
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }

        int suffix =1;
        //suffix o(n) 
         for(int i=n-2;i>=0;i--){
            suffix = suffix *nums[i+1];
            ans[i] = ans[i] * suffix;

           
        }
        

        
              

       
        return ans;
        
    }
};