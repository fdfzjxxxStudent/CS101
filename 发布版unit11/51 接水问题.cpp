#include <iostream>
#include <set>
using namespace std;
multiset<int> ms;    //n����ͷ��ǰ��ˮ�Ľ���ʱ�� 
int n,m,i,t,x;
int main(){
	cin>>n>>m;
	for(i=0;i<m;i++){
		cin>>x;
		ms.insert(x);
	}
	for(;i<n;i++){
		cin>>x;
		t=*ms.begin();
		ms.erase(ms.begin());
		ms.insert(t+x);
	}
	cout<<*ms.rbegin()<<endl;
	return 0;
}
