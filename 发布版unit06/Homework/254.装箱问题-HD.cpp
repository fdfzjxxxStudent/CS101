#include <iostream>
#define MAXN 31
#define MAXV 20001
using namespace std;
int v,n,a[MAXN],f[MAXV];
int main(){
    cin>>v>>n;
    for (int i=1;i<=n;i++)  cin>>a[i];
    for (int i=1;i<=n;i++)
        for (int j=v;j>=a[i];j--)
            f[j]=max(f[j],f[j-a[i]]+a[i]);
    cout<<v-f[v]<<endl;
}
