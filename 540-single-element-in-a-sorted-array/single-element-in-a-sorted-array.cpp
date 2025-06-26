class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        
        int n = a.size();

         if (n==1){
            return a[0];
        }

        int s = 0;
        int e =n - 1;

    
        while(s<=e){
            int mid = s + (e-s)/2;
            //edge case
            //when mid = 0
            if(mid == 0 && a[0]!=a[1]){
                return a[mid];
            }
            //when mid = n-1 or e 
            if(mid==n-1 && a[n-1]!=a[n-2])
                return a[mid];
            

            if(a[mid-1] != a[mid] && a[mid] != a[mid + 1])
                return a[mid];
            

            if(mid%2 == 0){  //even
                if(a[mid] == a[mid -1]){
                    e = mid-1;
                }else{
                    s = mid+1;
                }

            }else{   //odd
                if(a[mid] == a[mid -1]){
                    s = mid+1;
                }else{
                    e = mid-1;
                }
              


            }

             

            

        }
        return -1;
        
    }
};