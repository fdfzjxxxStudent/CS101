#include<iostream>
#include<map>
using namespace std; 
int main(){
  	map<char,int> d;
  	d['a']=101;
  	d['b']=202;
  	d['c']=302; 
	cout<<d.size()<<endl;
	return 0;
}

