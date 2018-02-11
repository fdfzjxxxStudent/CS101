*#include<iostream>
#include<set>
#define N 1005
using namespace std;
struct elm{int pos,value;};
struct cmp{
	bool operator()(const elm&a,const elm&b)const{
		return a.pos<b.pos;
	}
};
set<elm,cmp> s;
int n,m,x,f[N],ans=0;
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(s.count((elm){f[x],x})==0){
			ans++;
			if(s.size()==m) s.erase(s.begin());
			f[x]=i;
			s.insert((elm){i,x});			
		}
	}
	cout<<ans<<endl;	
	return 0;
}
/*
每个元素记录数值，位置 
struct elm{int pos, value;}; sorted by pos
set< elm,cmp > s;
f[elm]:elm在原数列几号位置 
新元素插入 :1. s.insert((elm){i,x[i]});  2. f[x[i]]=i;
判断元素的数值是否存在：s.count((elm){f[x[i]],x[i]})
查找所有元素中，位置最小的元素: s.begin()
删除元素 s.erase(s.begin())
*/
