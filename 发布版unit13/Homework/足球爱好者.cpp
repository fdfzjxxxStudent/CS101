#include <iostream>
#include <set>
using namespace std;
int n,m,i,tmp,arrival,c;
struct ps{ int place,id;};
struct cmp{
	bool operator()(const ps&a,const ps&b)const{
		if(a.place<b.place) return 1;
		if(a.place>b.place) return 0;
		return 0;
	}
};
multiset<ps,cmp> p;
multiset<ps,cmp>::iterator pit;
ps x;
void input(){
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>x.place;
		x.id=i;
		p.insert(x);
		if(x.place>=m) arrival++;
	}
}
void compute(){
	for(;arrival<1;c++){
		pit=p.begin();
		x.place=pit->place;
		x.place+=10;
		p.erase(p.begin());
		p.insert(x);
		if(x.place>=m) arrival++;
	}
}
int main(){
	input();
	compute();
	cout<<c<<endl;
}
/*
每个罐子至多踢O(m/10)次
复杂度：O(nm/10*logn)
*/ 
