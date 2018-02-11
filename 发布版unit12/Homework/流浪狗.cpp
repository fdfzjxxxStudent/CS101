#include <iostream>                                     //预处理函数 
#include <set>
#include <string>
using namespace std;                                    //使用std名字空间 

struct info{int birthday;string name;};                 //定义 自定义类型——info 
struct cmp{                                             //设定 判断规则 
	bool operator()(const info&a,const info&b)const{    //注意"const"，不可改变原信息 
		/*                                              显示详细信息
		cout<<"=========================="<<endl;
		cout<<a.name<<":"<<a.birthday<<endl;
		cout<<b.name<<":"<<b.birthday<<endl;
		*/
		//判断规则 语句=============================================================== 
		if(a.name<b.name)return 1; 
		if(a.name>b.name)return 0;
		if(a.birthday<b.birthday)return 1;
		if(a.birthday>b.birthday)return 0;
		return 0;
		//============================================================================ 
	}
};

//初始化，不详细解释===================== 
set<info,cmp> dog;
int n,m,i;
//======================================= 

int main(){
	cin>>n>>m;                                          //输入n和m  
	//现存记录输入 
	for(i=1;i<=n;i++){                                  //for循环，循环n次 
		info x;                                         //定义x为info 
		cin>>x.name>>x.birthday;                        //输入数据name和birthday ，注意顺序！ 
		dog.insert(x);                                  //将数据输入set中 
	} 
	//查询记录 
	for(i=1;i<=m;i++){                                  //for循环，循环m次 
		info y;                                         //定义y为info 
		cin>>y.birthday>>y.name;                        //输入要查询的数据birthday和name，注意顺序！ 
		cout<<dog.count(y)<<' ';                        //输出查询结果 
	}
	return 0;
} 
