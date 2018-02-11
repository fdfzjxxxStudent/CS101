#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> s1,s2;//s1 max, s2 min
    int n,a,b;
    cin>>n; 
    cin>>a; cout<<a<<endl;
    s1.insert(a);
    for(int i=2;i<=n;i++){
        cin>>a;
        s1.insert(a);       
        s2.insert(*s1.rbegin()); s1.erase(--s1.end());
        s1.insert(*s2.begin()); s2.erase(s2.begin());
        if(i%2==1){
            s2.insert(*s1.rbegin()); s1.erase(--s1.end());
            cout<<*s1.rbegin()<<endl;
        }
    }
    return 0;
}
