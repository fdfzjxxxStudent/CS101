#include <iostream>
using namespace std;
int n,m,ans=1;
int main(){
	cin>>n>>m;
	for(int i=0,x;i<n;i++){
		cin>>x;
		if(x>=m){ cout<<0<<endl; exit(0);}
		if(x>=0) ans+=(m-1-x)/10;
	}
	cout<<ans<<endl;
	return 0;
}
