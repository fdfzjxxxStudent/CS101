#include<iostream>
using namespace std;
int i,n,ans,f[10001],x[10001],m;
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>x[i];
	f[1]=x[1]; 
	for(i=1;i<=n;i++){
		int tmp=0;
		if(i>m) tmp=max(tmp,f[i-m]);
		if(i>m+1) tmp=max(tmp,f[i-(m+1)]);
		if(i>m-1) tmp=max(tmp,f[i-(m-1)]);
		f[i]=tmp+x[i];
	}
	ans=f[1];
	for(i=1;i<=n;i++)
		ans=max(ans,f[i]);
	cout<<ans<<endl;
	return 0;
}
