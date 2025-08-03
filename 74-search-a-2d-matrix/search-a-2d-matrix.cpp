class Solution {
public:
    bool row_search(vector<vector<int>>& mat, int tar,int row){
        //search in row
         int n = mat[0].size();
         int s = 0, e =n-1;
         while(s<=e){
            int mid = s + (e-s)/2;
            if(tar == mat[row][mid]){
                return true;
            }else if( tar > mat[row][mid]){
                s = mid +1;
            }else{
                e = mid-1;
            }

         }
         return false;


    };





    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();

    //choose right row    
        int s =0;
        int e = m-1;
        while(s<=e){
            int mid = s +(e-s)/2;
            if(tar >= mat[mid][0] && tar <= mat[mid][n-1]){
                return row_search(mat,tar,mid);
            }else if( tar > mat[mid][n-1] ){
                s = mid +1;
            }else{
                e = mid -1;
            }
        }
        return false;
        
    }
};