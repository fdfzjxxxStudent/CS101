#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char,int> str;
map<char,int>::iterator it;
string s;
int main(){
	getline(cin,s);
	for(int i=0;i<=s.length()-1;i++) str[s[i]]++;
	for(it=str.begin();it!=str.end();++it) cout<<it->first<<" "<<it->second<<endl;
	return 0;
}
