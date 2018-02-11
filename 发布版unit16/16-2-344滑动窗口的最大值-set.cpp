#include<iostream>
#include<set>
#define N 100005
using namespace std;
struct num{int p,v;};//Î»ÖÃp£¬´óĞ¡v 
struct cmp{
	bool operator()(const num&a,const num&b)const{
		return a.v>b.v||a.v==b.v&&a.p<b.p;
	}
};
set<num,cmp> s;
set<num,cmp>::iterator it;
int x[N];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		if(i>=k){
			cout<<s.begin()->v<<" ";
			it=s.find((num){i-k,x[i-k]});
			s.erase(it);
		}	
		cin>>x[i]; 
		s.insert((num){i,x[i]});
	}
	cout<<s.begin()->v<<" ";
	return 0;
}
