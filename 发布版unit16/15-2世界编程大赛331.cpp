#include<iostream>
#include<string>
#include<map>
using namespace std;
struct ren{string name;int score;};
int main() {
	map<string,ren> d;
	map<string,ren>::iterator mit;
	string x;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		ren r;
		cin>>r.name>>x>>r.score;
		if(d[x].score<r.score) d[x]=r;
	}
	cout<<d.size()<<endl;
	for(mit=d.begin();mit!=d.end();mit++)
		cout<<mit->first<<" "<<mit->second.name<<endl;		
	return 0;
}


