class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int tar) {
        vector<vector<int>>ans;
        sort(num.begin(),num.end());
        int n = num.size();

        for(int i=0;i<n;i++){
           if(i>0 && num[i]==num[i-1]) continue;
            for(int j=i+1;j<n;j++){
               if(j>i+1 && num[j]==num[j-1]) continue;

                int p = j+1;
                int q = n-1;

                while(p<q){
                    long long sum = (long long)num[i]+(long long)num[j]+(long long)num[p]+(long long)num[q];

                    if(sum < tar){
                        p++;
                    }else if(sum > tar){
                        q--;
                    }else{ // sum = tar
                    vector<int>temp = {num[i],num[j],num[p],num[q]};
                    ans.push_back(temp);
                    p++;
                    q--;
                    while(p<q && num[p]==num[p-1])p++;
                    while(p<q && num[q]==num[q+1])q--;
                    }

                }

            }
        }
       
        return ans; 
    }
};