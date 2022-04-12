#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int la,lb,i,j;
	int n[105]={};
	cin>>a>>b;
	la=a.length();
	lb=b.length();
	for(i=0 ; i<la ; i++){
		for(j=0 ; j<lb ; j++){
			n[i+j]+=(a[la-i-1]-'0')*(b[lb-j-1]-'0');
		}
	}
	for(i=0 ; i<105 ; i++){
		n[i+1]+=n[i]/10;
		n[i]%=10;
	}
	for(i=105 ; i>=0 && n[i]==0 ; i--);
	if(i<0){
		cout<<0<<endl;
	}
	for(; i>=0 ; i--){
		cout<<n[i];
	}
	cout<<endl;
	return 0;
}
