class Solution {
public:
    void sortColors(vector<int>&a) {

        int mid=0;
        int low=0;
        int high=a.size() -1;

        while(mid<=high){
            if(a[mid]==0){
                swap(a[low],a[mid]);
                low++;
                mid++;
            }

            else if(a[mid]==1){
                mid++;
            }

            else if(a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }



        }
        
    }
};