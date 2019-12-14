#include<iostream>
using namespace std;
int main () {

    int n,c=0;
    cin>>n;
    int a[n],l[n],r[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

	l[0]=a[0];
    for(int i=1;i<n;i++){
		l[i]=max(l[i-1],a[i]);
    }

	r[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		r[i]=max(r[i+1],a[i]);
	}

	int store;
	for(int i=0;i<n;i++){
		store=(min(l[i],r[i])-a[i]);
		c=c+store;
	}

    cout<<c;


	return 0;
}
