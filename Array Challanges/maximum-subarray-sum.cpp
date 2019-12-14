#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){

        int n;
        cin>>n;
        int arr[n];
        int cs=0;
        int ms=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int k=0;k<n;k++){
            cs=cs+arr[k];
            if(cs<0){
                cs=0;
            }
            ms=max(cs,ms);
        }
        cout<<ms<<endl;
    }
	return 0;
}
