#include <iostream>
#include <set>
using namespace std;
multiset<int> s1;//s1:small
multiset<int> s2;//s2:big
int n,i,a;
int main(){
	cin>>n>>a;
	s1.insert(a);
	cout<<a<<endl;
	for(i=2;i<=n;i++){
		cin>>a;
		s1.insert(a);
		s2.insert(*s1.rbegin()); s1.erase(--s1.end());
		s1.insert(*s2.begin()); s2.erase(s2.begin());
		if(i%2==1){
            s2.insert(*s1.rbegin()); s1.erase(--s1.end());
			cout<<*s1.rbegin()<<endl;
		}
	}
	return 0;
}
