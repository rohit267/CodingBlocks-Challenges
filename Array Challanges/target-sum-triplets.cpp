#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
    int l=i+1;
    int r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==t){
                cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
                l++;
                r--;
            }

            else if(arr[i]+arr[l]+arr[r]<t)
                l++;
            else
                r--;
        }
    }
    return 0;
}
