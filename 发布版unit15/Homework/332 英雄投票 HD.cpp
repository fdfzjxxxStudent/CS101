#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
stringstream ss[1000000];
long long k,n;
int i=1;
string s;
struct hero{
	string name;
	int vote;
};
struct cmp{
	bool operator()(const hero&x,const hero&y)const{
		if(x.vote<y.vote) return 1;
		if(x.vote>y.vote) return 0;
		if(x.name>y.name) return 1;
		if(x.name<y.name) return 0;
		return 0;
	}
};
hero z;
map<hero,int,cmp> h;
map<hero,int,cmp>::iterator it;
int main(){
	cin>>k;
 	cin.clear();
	cin.sync(); 
	getline(cin,s); 
	s[s.length()+1]=' ';
	for(int j=1;j<=s.find(32);j++){
		ss[j]<<s;
		ss[j]>>z.name;
		for(it=h.begin();it!=h.end();it++)
			if(it->first.name==z.name){
				z.vote=h[z]; 
				cout<<z.name<<"|"<<z.vote<<endl;
				h[z]=z.vote++;
			}
	}
	for(it=h.begin();i<=k&&it!=h.end();i++,it++) cout<<it->first.name<<endl;
	return 0;
}
