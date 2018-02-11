#include<iostream>
using namespace std;
long long f[21][21],x[3],y[3],i,j,n,m,k;
int main(){
	cin>>n>>m;
	for(k=0;k<3;k++)cin>>x[k]>>y[k];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
		if(i==1&&j==1){
		    f[i][j]=1;
		    for(k=0;k<3;k++)
			    if(i==x[k]&&j==y[k])
				    f[i][j]=0;}
		else {
		    f[i][j]=f[i-1][j]+f[i][j-1];
		    for(k=0;k<3;k++)if(i==x[k]&&j==y[k])f[i][j]=0;}
		}
	}
	cout<<f[n][m]<<endl;	
	return 0;
}


