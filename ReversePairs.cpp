class Solution {
public:

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

int countpairs(vector<int> &arr,int low,int mid,int high){
  int count =0;
  int right = mid+1;
  for(int i=low;i<=mid;i++){
        while(right<=high && (long long)arr[i]> (long long )2*arr[right]) 
         right++;
           count+=right-(mid+1);
        
    }
    return count;
}

int mergesort(vector<int> &arr,int low,int high){
   int count =0;
   if(low>=high) return count;
   int mid=(low+high)/2;
   count+=mergesort(arr,low,mid);
   count+=mergesort(arr,mid+1,high);
   count+=countpairs(arr,low,mid,high);
   merge(arr,low,mid,high);
   return count;
}

int reversePairs(vector<int> &nums){
    int n = nums.size();
 return  mergesort(nums,0,n-1);
   
}

};