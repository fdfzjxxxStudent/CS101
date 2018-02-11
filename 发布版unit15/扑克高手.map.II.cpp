#include <bits/stdc++.h>
using namespace std;
struct f{int cnt,pos;};
map<string,f> card;
map<string,f>::iterator it;
string flower,num;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>flower>>num;
		card[flower+num].cnt++;
		if(card[flower+num].cnt>1){
			cout<<card[flower+num].pos<<" "<<i<<endl;
			return 0;
		}
		card[flower+num].pos=i;
	}
	cout<<"Nice hand"<<endl;
	return 0;
}
