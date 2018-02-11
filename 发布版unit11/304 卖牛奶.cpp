#include <iostream>
#include <set>
using namespace std;
int main(){
	multiset<int> s;
	int n,i,j,buy=0,sell=0,t,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>y;
		buy+=x;
		for(j=0;j<x;j++) s.insert(i);
		while(!s.empty()){
		t=*s.begin();
		if(i-t<=3) break;
		s.erase(t);
		}
		for(j=0;j<y;j++){
			if(s.empty()) break;
			s.erase(s.begin());
			sell++;
		}
	}
	cout<<sell<<" "<<buy-sell<<endl;
	return 0;
}
