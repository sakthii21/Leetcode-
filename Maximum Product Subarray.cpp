class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n = nums.size();
        int prefix = 1,suffix =1;
       int maxi = INT_MIN;
       for(int i=0;i<n;i++){
          if(suffix==0) suffix =1;
          if(prefix ==0)prefix =1;
          prefix = prefix*nums[i];
          suffix = suffix*nums[n-i-1];
          maxi = max(maxi,max(prefix,suffix));
       }
       return maxi;
    }
};