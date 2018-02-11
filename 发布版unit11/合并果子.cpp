#include <iostream>
#include <set>
#define M 10001
using namespace std;
int n,tmp,i,cost;
multiset<int> a;
multiset<int>::iterator it;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>tmp;
		a.insert(tmp);
	}
	for(i=1;i<n;i++){
		it=a.begin();
		int x=*it;
		a.erase(it);
		it=a.begin();
		int y=*it;
		a.erase(it);
		a.insert(x+y);
		cost+=x+y;
	}
	cout<<cost<<endl;
	return 0;
}
