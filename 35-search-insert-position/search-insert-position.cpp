class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = n;

        while(low<=high){
            int mid = low + (high - low)/2;

            if(arr[mid]>=tar){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
      return ans;
    }
};