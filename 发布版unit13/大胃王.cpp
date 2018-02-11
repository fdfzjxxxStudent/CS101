#include <iostream>
#include <set> 
using namespace std;
struct drink{int price,L;};
struct cmp{
	bool operator()(const drink&x,const drink&y){
		if(x.price>y.price) return 0;
		if(x.price<y.price) return 1;
		if(x.L>y.L) return 1;
		return 0;
	}
};
drink z;
multiset<drink,cmp> ms;
multiset<drink,cmp>::iterator it; 
int n,all=100,price=0,i;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>z.L>>z.price;
		ms.insert(z);
	}
	for(int all=100;all>0&&!ms.empty();){
		it=ms.begin();
		int he=min(it->L,all);
		price+=he*it->price;
		all-=he;
		ms.erase(it);
	}
	cout<<price<<endl;
	return 0;
}
