#include <iostream>
#include <string>
#include <map>
using namespace std;
struct person{string international;};
struct info{string name;int score;};
struct cmp{
	bool operator()(const person&x,const person&y)const{
		if(x.international>y.international) return 0;
		if(x.international<y.international) return 1;
		return 0;
	}
};
map<person,info,cmp> p;
map<person,info,cmp>::iterator it;
person zp;
info zi;
void input(int num){
	for(int i=1;i<=num;i++){
		cin>>zi.name>>zp.international>>zi.score;
		if(p[zp].score>=zi.score) continue;
		p[zp]=zi;
	}
}
void output(){
	cout<<p.size()<<endl;
	for(it=p.begin();it!=p.end();it++)
		cout<<it->first.international<<" "<<it->second.name<<endl;
}
int main(){
	int n;
	cin>>n;
	input(n);
	output();
	return 0;
}
