#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    int l=0;
    int h=n-1;
    sort(arr,arr+n);
    while(l<h){
        if(arr[l]+arr[h]==t){
            cout<<arr[l]<<" and "<<arr[h]<<endl;
            l++;
            h--;
        }
        else if(arr[l]+arr[h]>t){
            h--;
        }
        else{
            l++;
        }
    }
	return 0;
}
