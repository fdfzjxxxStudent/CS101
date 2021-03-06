#include <iostream>
#define M 505 
#define N 2005
using namespace std;
int n,m,w[M],v[M],f[M][N]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>w[i]>>v[i];
	//初始化清零，已经默认执行了		
	for(int i=1;i<=m;i++)   //循环查看每种财物i 
		for(int j=0;j<=n;j++) {  //循环查看背包剩余承重j 
			if(j<w[i])   //财物i太重，无法放入 
				f[i][j]=f[i-1][j];
			else 		//比较两种决策：财物i可以放，或者不放
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);
		} 
	cout<<f[m][n]<<endl;
	return 0;
} 
