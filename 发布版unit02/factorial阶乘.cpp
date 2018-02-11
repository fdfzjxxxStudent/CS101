#include<iostream>
using namespace std;
unsigned long long int n,f[21];
int main(){
	cin>>n;
	f[0]=1;
	for(int i=1;i<=n;i++) 
		f[i]=f[i-1]*i;
	cout<<f[n]<<endl;
	return 0;
}
