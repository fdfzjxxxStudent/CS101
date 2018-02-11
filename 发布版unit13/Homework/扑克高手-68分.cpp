#include <iostream>
#include <string>
#include <set>
using namespace std;
string tmp,type;
int n,i;
bool same;
set<string> c;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>type>>tmp;
		c.insert(type);
	}
	if (c.size()!=n) cout<<"I am angry"<<endl;
	else cout<<"Nice hand"<<endl;
	return 0;
}
