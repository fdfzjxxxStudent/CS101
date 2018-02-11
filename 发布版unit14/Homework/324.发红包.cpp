//324.·¢ºì°ü.cpp
//Copyright (C) XiyuWang 2017 All rights reserved. 
#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
map<string,int> money;
map<string,int>::iterator mit;
string sender,reciver,m;
stringstream ss[1001];
char c;
int n,i,j,rm,rnum;//rm:recived money,rnum:reciver numbers
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>sender>>m;
		ss[i]<<m;
		ss[i]>>rm>>c>>rnum;
		for(j=1;j<=rnum;j++){
			cin>>reciver;
			money[reciver]+=rm;
		}
		money[sender]-=rm*rnum;
	}
	for(mit=money.begin();mit!=money.end();mit++) cout<<mit->first<<" "<<mit->second<<endl;
	return 0;
}
