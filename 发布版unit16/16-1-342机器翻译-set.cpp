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
ÿ��Ԫ�ؼ�¼��ֵ��λ�� 
struct elm{int pos, value;}; sorted by pos
set< elm,cmp > s;
f[elm]:elm��ԭ���м���λ�� 
��Ԫ�ز��� :1. s.insert((elm){i,x[i]});  2. f[x[i]]=i;
�ж�Ԫ�ص���ֵ�Ƿ���ڣ�s.count((elm){f[x[i]],x[i]})
��������Ԫ���У�λ����С��Ԫ��: s.begin()
ɾ��Ԫ�� s.erase(s.begin())
*/
