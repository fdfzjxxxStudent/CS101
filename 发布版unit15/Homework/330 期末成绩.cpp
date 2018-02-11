#include <iostream>
#include <string>
#include <map>
using namespace std;
int n,num;
struct student{	string name,mf;};
struct info{ int score;};
struct cmp{
	bool operator()(const student&x,const student&y)const{
		if(x.name<y.name) return 1;
		if(x.name>y.name) return 0;
		if(x.mf>y.mf) return 1;
		if(x.mf<y.mf) return 0;
		return 0;
	}
};
map<student,info,cmp> stu;
map<student,info,cmp>::iterator it;
student zs;
info zi;
void input(int num){
	int C,M,E;
	for(int i=1;i<=n;i++){
		cin>>zs.name>>zs.mf>>C>>M>>E;
		zi.score=C+M+E;
		stu[zs]=zi;
	}
}
void output(){
	cout<<stu.size()<<endl;
	for(it=stu.begin();it!=stu.end();it++)
		cout<<it->first.name<<" "<<it->first.mf<<" "<<it->second.score<<endl;

}
int main(){
	cin>>n;
	input(n);
	output();
	return 0;
}
