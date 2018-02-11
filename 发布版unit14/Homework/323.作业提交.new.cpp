#include <iostream>
#include <string>
#include <map>
using namespace std;
string name;
int m,score;
map<string,int> info;
map<string,int>::iterator it;
int main(){
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>name>>score;
		if(info[name]<score) info[name]=score;
	}
	cout<<info.size()<<endl;
	for(it=info.begin();it!=info.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	return 0;
}
