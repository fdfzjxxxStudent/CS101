#include <iostream>
#include <set>
#include <string>
using namespace std;
long long int m;
string a,b;
int main(){
	set<string> js;
	set<string>::iterator jsit;
	js.insert("zombie");
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		for(jsit=js.begin();jsit!=js.end();jsit++)
			if(*jsit==b||*jsit==a){
				js.insert(a);
				js.insert(b);
			}
	}
	cout<<js.size()<<endl;
	return 0;
} 
