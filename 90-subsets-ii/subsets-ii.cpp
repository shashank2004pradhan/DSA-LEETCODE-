class Solution {
public:
    void getallsubsets(vector<int>&a,vector<int>&ans,int i,vector<vector<int>>&powerset){
        if(i==a.size()){
            powerset.push_back(ans);
            return;
        }
        //include
        ans.push_back(a[i]);
        getallsubsets(a,ans,i+1,powerset);
        //backtract
        ans.pop_back();
        //exclude
        int  idx = i+1;
        while(idx < a.size() && a[idx] == a[idx-1]){
            idx++;
        }
        getallsubsets(a,ans,idx,powerset);


    }



    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>> powerset;
        vector<int>ans;

        sort(a.begin(),a.end());
        getallsubsets(a,ans,0,powerset);
        return powerset;
        
    }
};