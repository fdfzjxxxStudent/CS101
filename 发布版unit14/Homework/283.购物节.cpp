//283.¹ºÎï½Ú.cpp
//Copyright (C) XiyuWang 2017 All rights reserved. 
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;
map<string,double> item;
map<string,double>::iterator itemit;
long long n,i;
double price;
string name;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>name>>price;
		item[name]==0?item[name]=price*0.75:item[name]=price+item[name];
	}
	for(itemit=item.begin();itemit!=item.end();++itemit) cout<<itemit->first<<" "<<setprecision(2)<<fixed<<itemit->second<<endl;
	return 0;
}
