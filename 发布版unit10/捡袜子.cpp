#include <iostream>
#include <string>
#include <set>
using namespace std; 
long long int n,sum;
string sock;
int main(){
	cin>>n;
	multiset<string> sockcolor;
	multiset<string>::iterator scit;
	set<string> color;
	set<string>::iterator cit;
	for(int i=1;i<=n;i++){
		cin>>sock;
		sockcolor.insert(sock);
		color.insert(sock);
	}
	for(cit=color.begin();cit!=color.end();cit++){
		sum=sockcolor.count(*cit)/2+sum;
	}
	cout<<sum<<endl;
	return 0;
}
