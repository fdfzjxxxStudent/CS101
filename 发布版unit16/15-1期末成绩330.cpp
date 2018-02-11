#include<iostream>
#include<string>
#include<map>
using namespace std;
struct fen{int a,b,c;};
struct ren{string name,gender;};
struct cmp{
	bool operator()(const ren&a,const ren&b)const{
		if(a.name<b.name) return 1;
		if(a.name>b.name) return 0;
		if(a.gender>b.gender) return 1;
		return 0;
	}
};
int main() {
	map<ren,fen,cmp> d;
	map<ren,fen,cmp>::iterator mit;
	string x,y;
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		ren r;
		fen f;
		cin>>r.name>>r.gender>>f.a>>f.b>>f.c;
		d[r]=f;
	}
	cout<<d.size()<<endl;
	for(mit=d.begin();mit!=d.end();mit++){
		cout<<mit->first.name<<" "<<mit->first.gender<<" ";
		cout<<mit->second.a+mit->second.b+mit->second.c<<endl;
	}		
	return 0;
}


