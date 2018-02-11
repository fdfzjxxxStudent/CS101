#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int k,m,t;
map<string,int> h;
map<string,int>::iterator it;
map<string,int>::iterator itmp;
string name;
int main(){
	string str,tmps;
	stringstream ss;
 	cin>>k;
 	cin.clear();
	cin.sync(); 
	getline(cin,str);
	str[str.length()]=32;
	for(int i=0;i<=str.length()-1;i++){
		if(str[i]==32){
			ss<<str;
			ss>>name;
			h[name]++;
			m=max(m,h[name]);
		}
	}
	int i=1;
	for(it=h.begin();it!=h.end();){
		if(it->second==m){
			cout<<it->first<<endl;
			h.erase(it);
			it=h.begin();
			m=0;
			t++;
		}
		else it++;
		if(t<k)
			for(itmp=h.begin();itmp!=h.end();itmp++)
				m=max(m,itmp->second);
	}
	return 0;
}
