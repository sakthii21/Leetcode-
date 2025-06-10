class Solution {
public:
    void sortColors(vector<int>& nums) {
        //ductch national flag
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }
            else if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
        }
       
    }
};