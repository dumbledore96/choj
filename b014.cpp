#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int sum[4]={};
	for(int i=1 ; i<=3 ; i++){
		getline(cin,a);
		stringstream ss(a);
		int j=0,n;
		while(ss>>n){
			sum[i]+=n;
		}
	}
	int max=sum[1],maxn=1;
	if(sum[2]>max){
		max=sum[2];
		maxn=2;
	}
	if(sum[3]>max){
		max=sum[3];
		maxn=3;
	}
	cout<<maxn<<" "<<max<<endl;
	return 0;
}
