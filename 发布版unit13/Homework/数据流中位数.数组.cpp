#include <bits/stdc++.h>
using namespace std;
int n,in[100005],tmp[100005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>in[i];
	for(int j=0;j<n;j+=2){
		for(int k=0;k<=j;k++) tmp[k]=in[k];
		sort(tmp,tmp+j);
		cout<<tmp[j/2]<<endl;
	}
	return 0;
}
