#include <iostream>
#include <set>
using namespace std;

struct zombie{ 
	int blood,id,left,right; 
	bool alive;
};
struct cmp{
	bool operator()(const zombie&a,const zombie&b)const{
		if(a.blood<b.blood) return 0;
		if(a.blood>b.blood) return 1;
		if(a.id<b.id) return 0;
		if(a.id>b.id) return 1;
		return 0;
	}
};

multiset<zombie,cmp> z;
multiset<zombie,cmp>::iterator zit;
int n,i,c,died,zs[20000];
zombie x,y,xx;

void input(){
	cin>>n;
	for(i=1;i<=n;i++){
		x.id=i;
		x.left=i-1;
		x.right=i+1;
		x.alive=true;
		cin>>x.blood;
		z.insert(x);
		zs[i]=x.blood;
	}
}

void compute(){
	for(;died<n;c++){
		cout<<x.id<<"|"<<x.blood<<"~";
		zit=z.begin();
		x.id=zit->id;
		x.blood=zit->blood;
		x.left=zit->left;
		x.right=zit->right;
		z.erase(z.begin());
		x.blood-=2;
		zs[x.id]=x.blood;
		if(x.blood==0||x.blood==-1) died++;
		else{if(x.id!=0&&x.id!=n+1)z.insert(x);}
		cout<<x.id<<"|"<<x.blood<<"&";
		
		cout<<y.id<<"|"<<y.blood<<"~";
		y.id=x.left;
		y.blood=zs[x.id-1];
		y.right=x.id;
		y.left=x.left-1;
		z.erase(y);
		y.blood-=1;
		zs[x.id-1]=y.blood;
		if(y.blood==0||y.blood==-1) died++;
		else{if(y.id!=0&&y.id!=n+1)z.insert(y);}
		cout<<y.id<<"|"<<y.blood<<"&";
		
		cout<<y.id<<"|"<<y.blood<<"~";
		y.id=x.right;
		y.blood=zs[x.id+1];
		y.right=x.right+1;
		y.left=x.id;
		z.erase(y);
		y.blood-=1;
		zs[x.id+1]=y.blood;
		if(y.blood==0||y.blood==-1) died++;
		else{if(y.id!=0&&y.id!=n+1)z.insert(y);}
		cout<<y.id<<"|"<<y.blood<<endl;
	}
}

int main(){
	for(i=0;i<=20000;i++) zs[i]=10000000;
	input();
	compute();
	cout<<c<<endl;
}
	 
