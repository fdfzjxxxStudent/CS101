//323.作业提交.cpp
//Copyright (C) XiyuWang 2017 All rights reserved. 
#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string,int> stu;
map<string,int>::iterator stuit;
string name; 
int score,m,i;
int main(){
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>name>>score;
		stu[name]>score?stu[name]=stu[name]:stu[name]=score;
	}
	cout<<stu.size()<<endl;
	for(stuit=stu.begin();stuit!=stu.end();++stuit)
		cout<<stuit->first<<" "<<stuit->second<<endl;
	return 0;
}
