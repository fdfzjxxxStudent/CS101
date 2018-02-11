#include<iostream>
#include<string>
#include<set>
using namespace std;
struct dog{
	string name;
	int year;
};
struct cmp{
	bool operator()(const dog&a,const dog&b)const{
		if(a.name<b.name) return 1;
		if(a.year<b.year) return 1;
		return 0;
	}
};
int main(){
	multiset<dog,cmp> ms;
	dog f={"Jack",2000};
	ms.insert(f);
	dog g={"Batman",2017};
	ms.insert(g);
	//cout<<ms.count({"",2017})<<endl;
	dog d={"Batman",2016};
	ms.erase(d);
	dog e=*ms.begin();
	cout<<e.year+3<<endl;	
	return 0;
}

