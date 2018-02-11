//TE
#include <iostream>
#include <set>
#define M 100005
using namespace std;

struct num{	int value;};
struct cmp{
	bool operator()(const num&x,const num&y){
		if(x.value>y.value) return 1;
		return 0;
	}
};

int n,i,j,a[M],tmp[M];
multiset<num,cmp> nums;
multiset<num,cmp>::iterator numsit;
num z;

void input_compute(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(i%2==1){
			for(j=1;j<=i;j++){
				z.value=a[j];
				nums.insert(z);
			}
			for(j=1;j<=i/2;j++) nums.erase(nums.begin());
			numsit=nums.begin();
			cout<<numsit->value<<endl;
			nums.clear();
		}
	}
}
int main(){
	input_compute();
	return 0;
}
