#include <iostream>
#include <set>
#include <string>
using namespace std;
string filma,filmb;
int a,b; 
int main(){
	multiset<string> fa;
	multiset<string>::iterator fait;
	multiset<string> fb;
	multiset<string>::iterator fbit;
	
	getline(cin,filma);
	getline(cin,filmb);
	
	filma.erase(0,filma.find(':')+2);
	filmb.erase(0,filmb.find(':')+2);
	
	for(int i=0;i<=filma.size();i++){
		if(filma[i]==32){
			fa.insert(filma.substr(0,i));
			filma.erase(0,i+1);
			i=0;
		}
	}
	for(int i=0;i<=filmb.size();i++){
		if(filmb[i]==32){
			fb.insert(filmb.substr(0,i));
			filmb.erase(0,i+1);
			i=0;
			b++;
		}
	} 

	if(filma[0]!=' ') fa.insert(filma);
	if(filmb[0]!=' ') fb.insert(filmb);
	
	for(fbit=fb.begin();fbit!=fb.end();fbit++){
		for(fait=fa.begin();fait!=fa.end();fait++){
			if(*fbit==*fait){
				a++;
				break;
			}
		}
	}
	cout<<a<<"/"<<b+1<<endl;
}
