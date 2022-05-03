#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,act,a;
	cin>>n;
	vector<int> v;
	while(n--){
		cin>>act>>a;
		if(act==1){
			v.push_back(a);
		}
		
		else if(act==2){
			while(a--){
				v.pop_back();
			}
		}
		
		else{
			cout<<v[a]<<endl;
		}
	}
	return 0;
}

