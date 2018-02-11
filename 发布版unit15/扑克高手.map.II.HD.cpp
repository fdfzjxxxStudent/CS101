#include <bits/stdc++.h>
using namespace std;
map<string,int> card;
string flower,num;
int n,i;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>flower>>num;
		if(card.count(flower+num)){
			cout<<card[flower+num]<<" "<<i<<endl;
			return 0;
		}
		card[flower+num]=i;
	}
	cout<<"Nice hand"<<endl;
	return 0;
}
