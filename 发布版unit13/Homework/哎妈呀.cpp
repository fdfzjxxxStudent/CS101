#include <iostream>
#include <string>
#include <set>
using namespace std;
set<string> name;
set<string>::iterator nit;
int n,i;
string mfn,fn,tmp;

void input(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>fn>>tmp;
		name.insert(fn);
	}
	cin>>mfn>>tmp;
}
void compute_output(){
	if(name.count(mfn)>0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
int main(){
	input();
	compute_output();
	return 0;
}
