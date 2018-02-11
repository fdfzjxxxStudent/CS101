#include <bits/stdc++.h>
using namespace std;
map<string,int> card;
map<string,int>::iterator it;
string flower,num;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>flower>>num;
		card[flower+num]++;
		if(card[flower+num]>1){
			cout<<"I am angry"<<endl;
			return 0;
		}
	}
	cout<<"Nice hand"<<endl;
	return 0;
}
