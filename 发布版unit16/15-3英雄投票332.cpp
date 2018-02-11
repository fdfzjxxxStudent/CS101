#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;
struct hero{string name;int vote;};
struct cmp{
	bool operator()(const hero&a,const hero&b)const{
		if(a.vote>b.vote)return 1;
		if(a.vote<b.vote)return 0;
		if(a.name<b.name)return 1;
		return 0;
	}
};
int main() {
	map<string,int> d;
	map<string,int>::iterator mit;
	string x;
	int k;
	cin>>k;
	while(cin>>x) d[x]++;
	set<hero,cmp> s;
	set<hero,cmp>::iterator it;
	for(mit=d.begin();mit!=d.end();mit++)
		s.insert((hero){mit->first,mit->second});
	for(it=s.begin();k&&it!=s.end();it++,k--)
		cout<<it->name<<endl;	
	return 0;
}


