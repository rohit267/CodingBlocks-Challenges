#include<iostream>
using namespace std;

int larger(int n,int arr[]){
    int max=-1000000000;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {

    int n,max;
    cin>>n;
    int a[n+1];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    max=larger(n,a);
    cout<<max;
	return 0;
}
