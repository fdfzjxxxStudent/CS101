#include<iostream>
#define M 51
using namespace std;
long long yh[M][M],n,m,i,j;
int main(){
	cin>>n>>m;
	m--;
	for(i=1;i<=n;i++){
		yh[i][0]=1;
		for(j=1;j<=m;j++) yh[i][j]=yh[i][j-1]+yh[i-1][j];
	}
	cout<<yh[n][m]<<endl;
	return 0;
}
