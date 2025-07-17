#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int lower( vector<int>&arr,int n,int x){
    int left = 0;
    int right = n-1;
    int ans=n;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]>=x){
            ans = mid;
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={1,2,3,3,7,8,8,10,10,11};
    int n = arr.size();
    int x=9;
    int ans = lower(arr,n,x);
    cout<<ans;
    return 0;
}


