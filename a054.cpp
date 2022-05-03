#include<bits/stdc++.h>
using namespace std;
int main(){	
	//¥Îscanf,printf¥[³t 
	
	int n,act,k,a;
	scanf("%d",&n);
	//cin>>n;
	vector<int> v[105];
	while(n--){
		scanf("%d %d %d",&act,&k,&a);
		//cin>>act>>k>>a;
		if(act==1){
			v[k].push_back(a);
		}
		
		else if(act==2){
			while(a--){
				v[k].pop_back();
			}
		}
		
		else{
			printf("%d\n",v[k][a]);
			//cout<<v[k][a]<<endl;
		}
	}
	return 0;
}
