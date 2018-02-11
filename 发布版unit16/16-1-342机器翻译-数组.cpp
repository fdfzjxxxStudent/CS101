#include<iostream>
#define N 1005
using namespace std;
struct info{int pos,value;};
info mem[N];
int i,j,n,m,x,len=0,ans=0;
int main(){
	cin>>m>>n;
	for(i=0;i<n;i++){
		cin>>x;
		int small=n,jsmall;
		for(j=0;j<len;j++){ 
			if(mem[j].value==x)break;
			if(mem[j].pos<small){
				small=mem[j].pos;
				jsmall=j;
			}
		} 
		if(j==len){ //Ã»ÕÒµ½ 
			ans++;
			if(len<m) 
				mem[len++]=(info){i,x};
			else
				mem[jsmall]=(info){i,x};
		}
	}
	cout<<ans<<endl;	
	return 0;
}
