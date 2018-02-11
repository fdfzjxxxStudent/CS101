/*#include <iostream>
#include <set>
using namespace std;
int n,c,i,j,died,hp,tmp,tmp2;
multiset<int> m;
multiset<int>::iterator mit;
void input(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>hp;
		m.insert(hp);
	}
}
void compute(){
	while(!m.empty()){
		c++;
		m.erase(m.begin());
		for(j=1;j<=m.size();j++){
			mit=m.begin();
			tmp=*mit-1;
			if(tmp<=0){m.erase(m.begin());continue;}
			m.erase(m.begin());
			m.insert(tmp);
			cout<<tmp<<endl;
		}
	}
}
int main(){
	input();
	compute();
	cout<<c<<endl;
	return 0;
}
*/ 
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
int main(){
	int s[105];
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	for(int i=0;i<n;i++){
		if(s[i]-i>=1) ans++;
	}
	cout<<ans;
	return 0;
}
