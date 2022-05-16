#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n;
	while(cin>>n){
		if(n==0)break;
		v.push_back(n);
	}
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="Add"){
			int i;
			cin>>i;
			v.push_back(i);
		}	
		
		else if(s=="Del"){
			if(v.empty()){
				cout<<"Error"<<endl;
			}
			else{
				v.pop_back();
			}
		}
		
		else if(s=="Qry"){
			if(v.empty()){
				cout<<"Empty"<<endl;
			}
			else{
				for(int i=0 ; i<v.size()-1 ; i++){
					cout<<v.at(i)<<" ";
				}
				cout<<v.back()<<endl;
			}
			
		}
		
		else if(s=="Clear"){
			v.clear();
		}
	}
	return 0;
}
