#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10005]={1},n;
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		for(int j=0 ; j<=10000 ; j++){
			a[j]*=i;
		}
		for(int j=0 ; j<=10000 ; j++){
			a[j+1]+=a[j]/10;
			a[j]=a[j]%10;
		}
	}
	int i;
	for(i=10000 ; i>0 ; i--){
		if(a[i]!=0){
			break;
		}
	}
	for( ; i>=0 ; i--){
		cout<<a[i];
	}
	cout<<endl;
}
