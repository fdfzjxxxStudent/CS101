#include<iostream>
#include<set>
#define M 100001
using namespace std;
multiset<int> xx;
multiset<int>::reverse_iterator xxit;
int f[M],n,m,x[M],a[M],i,j,tmp;
int main(){
	cin>>m>>n;;
	for(i=1;i<=n;i++) cin>>a[i];
	f[0]=0;
	for(j=1;j<=n;j++){
		for(i=1;i<=m;i++){
			if(i>=a[j]&&f[i-a[j]]+a[j]<=m) x[i]=f[i-a[j]]+a[j];
			else x[i]=0;
			xx.insert(x[i]);
			f[i]=*xx.rbegin();
		}
	}
	cout<<*xx.rbegin()<<endl;
	return 0;
}
