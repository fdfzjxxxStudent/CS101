//325.º”√‹πÊ‘Ú.cpp
//Copyright (C) XiyuWang 2017 All rights reserved. 
#include <iostream>
#include <string>
using namespace std;
string sentence,way;
int s,w,i,j,a;
int main(){
	getline(cin,sentence);
	cin>>way;
	for(i=0;i<=sentence.length()-1;i++)
		for(j=0;j<=way.length()-1;j++)
			if(sentence[i]==way[j]){
				way[j+1]!=0?sentence[i]=way[j+1]:sentence[i]=way[0];
				break;
			}
	cout<<sentence<<endl;
	return 0;
}
