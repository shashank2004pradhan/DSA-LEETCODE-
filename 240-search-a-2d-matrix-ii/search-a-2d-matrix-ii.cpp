class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size();
        int m = mat[0].size();
        int r=0, c =m-1; // corner vals
        int mid = mat[r][c];
        
        while(r<n && c>=0){
        if(tar==mat[r][c]){
            return true;
        }

        else if(tar<=mat[r][c]){
            c--;
        } else{
            r++;
        }
        }
     return false;   
    }
};