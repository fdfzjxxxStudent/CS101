#include <iostream>
#include <string>
#include <set>
using namespace std;
long long int num;
string hname;
char q;
int main(){
	cin>>num;
	set<string> hero;
	set<string>::iterator hit;
	for(int i=1;i<=num;i++){
		cin>>hname;
		q=hname[0];
		hname.erase(0,1);
		if(q=='+') hero.insert(hname);
		else hero.erase(hname);
	}
	for(hit=hero.begin();hit!=hero.end();hit++) 
		cout<<*hit<<endl;
	return 0;
}
