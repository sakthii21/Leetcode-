class Solution {
public:
    int search(vector<int>& arr, int target) {
         int left =0;
         int n = arr.size();
         int right = n-1; 
         while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
         }
         return -1;
    }
};