#include<iostream>
#define N 100005
using namespace std;
int x[N],q[N];
int main(){
	int n,k,h=0,t=-1;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x[i];
		while(h<=t&&i-q[h]>=k)h++;
		while(h<=t&&x[i]>x[q[t]])t--;
		q[++t]=i;
		if(i>=k-1) cout<<x[q[h]]<<" ";
	}
	cout<<endl;
	return 0;
}
