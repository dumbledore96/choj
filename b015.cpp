#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,name;
	bool b=false;
	for(int i=1 ; i<=3 ; i++){
		getline(cin,a);
		stringstream ss(a);
		int n=1;
		while(ss>>name){
			if(name=="BILL"){
				cout<<i<<" "<<n<<endl;
				b=true;
				break;
			}
			n++;
		}
	}
	if(!b){
		cout<<"NO"<<endl;
	}
	return 0;
}
