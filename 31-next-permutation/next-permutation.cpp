class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int piv= -1;
        int n = a.size();
         //find pivot 
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                piv = i;
                break;
            }
        }
        //edgecase
        if(piv==-1){
            reverse(a.begin(),a.end());
            return;
        }

        //find right most el and if its greater than pivot ,swap em
        for(int i=n-1;i>=0;i--){
            if(a[i]>a[piv]){
                swap(a[i],a[piv]);
                break;
            }
        }

        //reverse from piv+1 to n-1
        int i=piv+1;
        int j=n-1;
        while(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        
    }
};