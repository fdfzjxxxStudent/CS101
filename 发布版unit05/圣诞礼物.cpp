#include <iostream>
#define M 505 
#define N 2005
using namespace std;
int n,m,w[M],v[M],f[M][N]; 
int main(){
	m=5;
	n=100;
	for(int i=1;i<=5;i++) cin>>w[i];
	for(int i=1;i<=m;i++)
		for(int j=0;j<=n;j++) {
			if(j<w[i])  
				f[i][j]=f[i-1][j];
			else 
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+w[i]);
		} 
	cout<<f[m][n]<<endl; 
	return 0;
} 
