#include <bits/stdc++.h>
using namespace std;
struct str{int cnt,pos;};
map<char,str> m;
map<char,str>::iterator mit;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(!m.count(s[i])) m[s[i]].pos=i;
		m[s[i]].cnt++;
	}
	for(mit=m.begin();mit!=m.end();mit++)
		cout<<mit->first<<" "<<mit->second.cnt<<" "<<mit->second.pos<<endl;
	return 0;
}
//map中访问不存在的元素，则自动初始化为默认值 
