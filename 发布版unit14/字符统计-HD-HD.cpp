#include <map>
#include <iostream>
#include <string>
using namespace std;
string s;
map<char,int> m;
map<char,int>::iterator mit;
int main(){
	getline(cin,s);
	for(int i=0;i<s.length();i++)
		m[s[i]]++;
	for(mit=m.begin();mit!=m.end();mit++)
		cout<<mit->first<<" "<<mit->second<<endl;
	return 0;
}
