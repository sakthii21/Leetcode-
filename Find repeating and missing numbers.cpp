#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int>func(vector<int>&arr,int n){
   long long sn=(n*(n+1))/2;
   long long s2n = (n*(n+1)*(2*n+1))/6;
   long long s=0,s2=0;
   for(int i=0;i<n;i++){
       s+=arr[i];
       s2+=arr[i]*arr[i];
   }
   long long val1 = s-sn;//x-y;
   long long val2=s2-s2n;
   val2 = val2/val1;
   long long x= (val1+val2)/2;
   long long y= val2-x;
   
   return {(int)x,(int)y};
}


int main(){
    vector<int>arr ={3,1,2,5,4,6,7,5};
    int n = arr.size();
    vector<int>ans = func(arr,n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}




