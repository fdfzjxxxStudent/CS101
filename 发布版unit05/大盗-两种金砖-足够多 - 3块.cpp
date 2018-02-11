#include<iostream>
#define M 100001
using namespace std;
int f[M],n,a,b,c,xa,xb,xc,i,j;
int main(){
	cin>>n>>a>>b>>c;
	f[0]=0;
	for(i=1;i<=n;i++){
		cout<<i<<"|"<<a<<endl;
		if(i>=a) xa=f[i-a]+a;
		else xa=0;
		cout<<i<<"|"<<b<<endl;
		if(i>=b) xb=f[i-b]+b;
		else xb=0;
		cout<<i<<"|"<<c<<endl;
		if(i>=c) xc=f[i-c]+c;
		else xc=0;
		f[i]=max(xa,max(xb,xc));
	}
	cout<<f[n]<<endl;	
	return 0;
}



