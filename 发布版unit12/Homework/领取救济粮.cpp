//领取救济粮.cpp
//开发者：王浠羽
//开发日期：2017/12/21
//版本：V5.1
//Copyright (C) XiyuWang 2017 All rights reserved.

#include <iostream>        //预处理函数 iostream
#include <set>             //预处理函数 set 
using namespace std;       //使用名字空间 std 

//定义Struct类型 
struct man{ 
	int id,bag;            //定义 Struct-man 中的专有数据（整型） id和bag 
	bool get;              //定义 Struct-man 中的专有数据（布尔型） get 
};
//定义Cmp排序规则 
struct cmp{
	bool operator()(const man&a,const man&b)const{
		if(a.bag<b.bag) return 1;    //如果 a中的bag数据 小于 b中的bag数据，则 返回True 
		if(a.bag>b.bag) return 0;    //如果 a中的bag数据 大于 b中的bag数据，则 返回False 
		if(a.id<b.id) return 1;      //如果 a中的id数据 小于 b中的id数据，则 返回True 
		if(a.id>b.id) return 0;      //如果 a中的id数据 大于 b中的id数据，则 返回False 
		return 0;                    //如果 不符合以上任何判断，则 返回False（备注：本句不起任何作用，因为每个id都不相等，一定会在id判断语句中直接返回数据） 
	}
}; 

//初始化 
multiset<man,cmp> mbag;               //定义Multiset类型 mbag 
multiset<man,cmp>::iterator mbit;     //定义Multiset-mbag的迭代器 
int n,sum,i;                          //定义整型 n(输入数据)，sum(未领到大米人数和),i(For循环用的变量) 
man x;                                //定义Struct-man类型 x 

//数据输入函数 
void input(){
	cin>>n;                           //输入 n 
	for(i=1;i<=n;i++){                //for循环，循环 n 次，每次 i 自增 
		x.id=i;                       //定义 Struct-man-x中的id数据 等于 i 
		x.get=false;                  //定义 Struct-man-x中的get数据 等于 false 
		cin>>x.bag;                   //输入 Struct-man-x中的bag数据 
		mbag.insert(x);               //在 multiset-mbag 中插入 x 
	}
}

//运算函数 
void compute(){
	for(i=1;i<=n;i++){                //for循环，循环 n 次 ，每次 i 自增 
		mbit=mbag.begin();            //定义 mbit迭代器 等于 multiset-mbag的开始数据 
		x.bag=mbit->bag;              //定义 Struct-man-x中的bag数据 等于 mbit迭代器指向bag的数据 
		x.get=mbit->get;              //定义 Struct-man-x中的get数据 等于 mbit迭代器指向get的数据 
		x.id=mbit->id;                //定义 Struct-man-x中的id数据 等于 mbit迭代器指向id的数据 
		mbag.erase(mbag.begin());     //删除 mbit迭代器 中的 multiset-mbag的开始数据的数据 
		x.bag+=3;                     //定义 Struct-man-x中的bag数据 自增3 
		x.get=true;                   //定义 Struct-man-x中的get数据 为true 
		mbag.insert(x);               //在 multiset-mbag 中插入 Struct-man-x 
	}	
	for(mbit=mbag.begin();mbit!=mbag.end();mbit++)   //for循环，循环 multiset-mbag数据量 次，每次循环 mbit迭代器 自增 
		if(mbit->get==false)                         //判断如果 mbit迭代器指向get的数据 是false，则执行以下语句 
			sum++;                                   //sum自增 
}

//主函数 
int main(){
	input();                          //执行 数据输入函数 
	compute();	                      //执行 运算函数 
	cout<<sum<<endl;                  //输出 sum 
}
