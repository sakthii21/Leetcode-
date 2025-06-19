class Solution {
public:
    int maxSubArray(vector<int>& nums){
        //kadane's algorithm => o(N)
      int n = nums.size();
      int sum=0;
      int maxi = INT_MIN;
      for(int i=0;i<n;i++){
          sum+=nums[i];
          maxi = max(sum,maxi);
          if(sum <0) sum =0;
      }
      return maxi;
      

         // normal subarray method

        // for(int i=0;i<n;i++){
        //     int sum =0;
        //     for(int j=i;j<n;j++){
        //        sum = sum + nums[j];
        //        maxi = max(maxi,sum);
        //     }
        // }
        // return maxi;
    }
};