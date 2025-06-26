class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        map<long long,int>mpp;
        int maxlen = 0;
       
        long long sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==k) maxlen = max(maxlen,i+1);
            
            long long rem = sum-k;
           if(mpp.find(rem)!=mpp.end()){
               int len =i-mpp[rem];
               maxlen = max(len,maxlen);
           }
           if(mpp.find(sum)==mpp.end()){
               mpp[sum]=i;
           }
            
        }
        return maxlen;
    }
};