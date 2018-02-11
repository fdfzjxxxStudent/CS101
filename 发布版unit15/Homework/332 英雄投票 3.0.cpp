#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <set>
using namespace std;
stringstream ss;
long long k;
int i=1,a,b;
string s,name;
struct hero{string name;int vote;};
struct cmp{
	bool operator()(const hero&x,const hero&y)const{
		if(x.vote>y.vote) return 0;
		if(x.vote<y.vote) return 1;
		if(x.name>y.name) return 1;
		if(x.name<y.name) return 0;
		return 0;
	}
};
map<string,int> h1;
map<string,int>::iterator it1;
set<hero,cmp> h;
set<hero,cmp>::reverse_iterator it;
hero z;
int main(){
	cin>>k;
	cin.clear(); 
	cin.sync();
	getline(cin,s); 
	while(________){
		ss<<s;
		ss>>name;
		a=s.find(name[0]);
		b=s.find(name[name.length()-1]);
		s.erase(a,b+1);
		h1[name]++;
		a=name.length();
	}
	for(it1=h1.begin();it1!=h1.end();it1++){
		z.vote=it1->second;
		z.vote--;
		z.name=it1->first;
		if(h.count(z)){
			h.erase(z);
			z.vote++;
			h.insert(z);
		}
		else{
			z.vote++;
			h.insert(z);
		}
	}
	int i=1;
	for(it=h.rbegin();it!=h.rend()&&i<=k;it++,i++)
		cout<<it->name<<endl;
	return 0;
}
