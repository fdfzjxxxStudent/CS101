//��ȡ�ȼ���.cpp
//�����ߣ������
//�������ڣ�2017/12/21
//�汾��V5.1
//Copyright (C) XiyuWang 2017 All rights reserved.

#include <iostream>        //Ԥ������ iostream
#include <set>             //Ԥ������ set 
using namespace std;       //ʹ�����ֿռ� std 

//����Struct���� 
struct man{ 
	int id,bag;            //���� Struct-man �е�ר�����ݣ����ͣ� id��bag 
	bool get;              //���� Struct-man �е�ר�����ݣ������ͣ� get 
};
//����Cmp������� 
struct cmp{
	bool operator()(const man&a,const man&b)const{
		if(a.bag<b.bag) return 1;    //��� a�е�bag���� С�� b�е�bag���ݣ��� ����True 
		if(a.bag>b.bag) return 0;    //��� a�е�bag���� ���� b�е�bag���ݣ��� ����False 
		if(a.id<b.id) return 1;      //��� a�е�id���� С�� b�е�id���ݣ��� ����True 
		if(a.id>b.id) return 0;      //��� a�е�id���� ���� b�е�id���ݣ��� ����False 
		return 0;                    //��� �����������κ��жϣ��� ����False����ע�����䲻���κ����ã���Ϊÿ��id������ȣ�һ������id�ж������ֱ�ӷ������ݣ� 
	}
}; 

//��ʼ�� 
multiset<man,cmp> mbag;               //����Multiset���� mbag 
multiset<man,cmp>::iterator mbit;     //����Multiset-mbag�ĵ����� 
int n,sum,i;                          //�������� n(��������)��sum(δ�쵽����������),i(Forѭ���õı���) 
man x;                                //����Struct-man���� x 

//�������뺯�� 
void input(){
	cin>>n;                           //���� n 
	for(i=1;i<=n;i++){                //forѭ����ѭ�� n �Σ�ÿ�� i ���� 
		x.id=i;                       //���� Struct-man-x�е�id���� ���� i 
		x.get=false;                  //���� Struct-man-x�е�get���� ���� false 
		cin>>x.bag;                   //���� Struct-man-x�е�bag���� 
		mbag.insert(x);               //�� multiset-mbag �в��� x 
	}
}

//���㺯�� 
void compute(){
	for(i=1;i<=n;i++){                //forѭ����ѭ�� n �� ��ÿ�� i ���� 
		mbit=mbag.begin();            //���� mbit������ ���� multiset-mbag�Ŀ�ʼ���� 
		x.bag=mbit->bag;              //���� Struct-man-x�е�bag���� ���� mbit������ָ��bag������ 
		x.get=mbit->get;              //���� Struct-man-x�е�get���� ���� mbit������ָ��get������ 
		x.id=mbit->id;                //���� Struct-man-x�е�id���� ���� mbit������ָ��id������ 
		mbag.erase(mbag.begin());     //ɾ�� mbit������ �е� multiset-mbag�Ŀ�ʼ���ݵ����� 
		x.bag+=3;                     //���� Struct-man-x�е�bag���� ����3 
		x.get=true;                   //���� Struct-man-x�е�get���� Ϊtrue 
		mbag.insert(x);               //�� multiset-mbag �в��� Struct-man-x 
	}	
	for(mbit=mbag.begin();mbit!=mbag.end();mbit++)   //forѭ����ѭ�� multiset-mbag������ �Σ�ÿ��ѭ�� mbit������ ���� 
		if(mbit->get==false)                         //�ж���� mbit������ָ��get������ ��false����ִ��������� 
			sum++;                                   //sum���� 
}

//������ 
int main(){
	input();                          //ִ�� �������뺯�� 
	compute();	                      //ִ�� ���㺯�� 
	cout<<sum<<endl;                  //��� sum 
}
