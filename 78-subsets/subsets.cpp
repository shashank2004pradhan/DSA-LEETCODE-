class Solution {
public:
    void getallsubsets(vector<int>& a,vector<int>&ans,int i,vector<vector<int>>&powerset){
        if(i ==a.size()){
            powerset.push_back(ans);
            return;
        }
        //include
        ans.push_back(a[i]);
        getallsubsets(a,ans,i+1,powerset);
        //backtrack
        ans.pop_back();
        //exclude
        getallsubsets(a,ans,i+1,powerset);
    }
    

    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>>powerset;
        vector<int>ans;
        
         getallsubsets(a,ans,0,powerset);
         return powerset;

        
    }
};