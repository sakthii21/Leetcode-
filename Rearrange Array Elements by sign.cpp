class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n = nums.size();
         vector<int>pos;
         vector<int>neg;
         for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
         }
         if(pos.size()>neg.size()){
            for(int i=0;i<neg.size();i++){
                nums[2*i] = pos[i];
                nums[2*i+1] = neg[i];
            }
            for(int i=neg.size();i<pos.size();i++){
                nums[i]=pos[i];
            }
         }
         else{
             for(int i=0;i<pos.size();i++){
                nums[2*i]=pos[i];
                nums[2*i+1] = neg[i];
             }
             for(int i=pos.size();i<neg.size();i++){
                nums[i] = neg[i];
             }
         }
         return nums;

    }
};