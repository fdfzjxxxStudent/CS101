//Copyright (C) XiyuWang All rights reserved.
#include <iostream>
#include <set>
#include <string>
using namespace std;
set<string> s;
set<string>::iterator it;
string str;
int main(){
	while(cin>>str) s.insert(str);
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<endl;
	return 0;
}
