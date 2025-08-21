class Solution {
public:
    int bs(vector<int>& a, int tar, int st, int e) {
        if (st > e) return -1; // base case

        int mid = st + (e - st) / 2;

        if (a[mid] == tar) return mid;
        else if (a[mid] < tar) 
            return bs(a, tar, mid + 1, e);
        else 
            return bs(a, tar, st, mid - 1);
    }

    int search(vector<int>& a, int tar) {
        return bs(a, tar, 0, a.size() - 1);
    }
};   // \U0001f448 You need this to properly close the class
