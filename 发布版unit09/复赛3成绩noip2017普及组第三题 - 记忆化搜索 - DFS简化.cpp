#include<iostream>
#include<algorithm>
#define INF 100000
#define M 105	//���̴�С 
using namespace std;
int d[M][M],f[M][M],m,n,x,y,z; //dΪԭ��ɫ��fΪ���� 
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
void go(int i,int j,int c,int e,bool magic){
	//λ��(i,j)����ɫc������e��magic��ʾ�ܷ���ħ�� 
    if(i>m||i<1||j<1||j>m)return; //Խ���� 
    f[i][j]=e;	//���·��� 
    for(int k=0;k<4;k++){//���ĸ������ƶ� 
    	int a=i+dx[k],b=j+dy[k],ee=(c!=d[a][b]);
    	//(a,b)Ϊ�ƶ�����λ�ã�����ɫ��ͬʱee����Ϊ1
    	if(d[a][b]&&e+ee<f[a][b]) //d[a][b]��ɫ 
			go(a,b,d[a][b],e+ee,1);
		if(!d[a][b]&&magic&&e+2<f[a][b])//d[a][b]��ɫ 
			go(a,b,c,e+2,0);
	}	
}
int main(){
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>z; d[x][y]=z+1;
    }
    fill(f[0],f[0]+M*M,INF);
    go(1,1,d[1][1],0,1);
    if(f[m][m]==INF)cout<<-1<<endl;
    else cout<<f[m][m]<<endl;
    return 0;
}
