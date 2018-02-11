#include<iostream>
#define M 21
using namespace std;
long long f[M][M],n,m,x,y,i,j;
int main(){
    cin>>n>>m>>x>>y;
    f[1][1]=1; f[x][y]=0;
    for(i=1;i<=n;i++) 
        for(j=1;j<=m;j++){
            if(i==1&&j==1) continue;
            if(x==i&&y==j) continue;
            f[i][j]=f[i-1][j]+f[i][j-1];
        }
    cout<<f[n][m]<<endl;    
    return 0;
}
