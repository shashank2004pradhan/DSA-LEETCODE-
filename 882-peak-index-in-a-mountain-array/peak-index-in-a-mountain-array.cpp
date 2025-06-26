class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int st =1;
        int end = a.size() -2;

        while(st<=end){
            int mid = st + (end-st)/2;
            //case 1 : where mid is peak
            if(a[mid-1]<a[mid]&& a[mid]>a[mid+1]){
                return mid;
            }
            //case 2 : where mid lies on inc side => right search for peak
            else if(a[mid-1]<a[mid]){
                st = mid + 1;

            }else{
                end = mid - 1;

            }
        }
        return -1;
       
        
    }
};