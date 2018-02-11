#include<iostream>
#define N 4
using namespace std;
int d[6][6],g[6][6],i,j;
int main(){
	for(i=1;i<=N;i++)
		for(j=1;j<=N;j++){
			char ch; cin>>ch;
			d[i][j]=ch-'0';
		}
	for(i=0;i<=N;i++){
		g[i][0]=-100;
		g[0][i]=-100;
	}
	for(i=1;i<=N;i++)
		for(j=1;j<=N;j++)
			if(i==1&&j==1) g[1][1]=d[i][j];
			else g[i][j]=max(g[i-1][j-1],max(g[i][j-1],g[i-1][j]))+d[i][j]-1; 
	cout<<g[N][N]<<endl;	
	return 0;
}
