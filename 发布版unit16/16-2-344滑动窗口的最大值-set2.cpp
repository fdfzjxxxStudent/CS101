#include<iostream>
#include<set>
#define N 100005
using namespace std;
int x[N];
struct cmp{
	bool operator()(const int&a,const int&b)const{
		return x[a]>x[b]||x[a]==x[b]&&a<b;
	}
};
multiset<int,cmp> s;
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		if(i>=k){
			cout<<x[*s.begin()]<<" ";
			s.erase(i-k);
		}
		cin>>x[i]; s.insert(i);	
	}
	cout<<x[*s.begin()]<<endl;
	return 0;
}
