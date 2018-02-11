#include <iostream>                                     //Ԥ������ 
#include <set>
#include <string>
using namespace std;                                    //ʹ��std���ֿռ� 

struct info{int birthday;string name;};                 //���� �Զ������͡���info 
struct cmp{                                             //�趨 �жϹ��� 
	bool operator()(const info&a,const info&b)const{    //ע��"const"�����ɸı�ԭ��Ϣ 
		/*                                              ��ʾ��ϸ��Ϣ
		cout<<"=========================="<<endl;
		cout<<a.name<<":"<<a.birthday<<endl;
		cout<<b.name<<":"<<b.birthday<<endl;
		*/
		//�жϹ��� ���=============================================================== 
		if(a.name<b.name)return 1; 
		if(a.name>b.name)return 0;
		if(a.birthday<b.birthday)return 1;
		if(a.birthday>b.birthday)return 0;
		return 0;
		//============================================================================ 
	}
};

//��ʼ��������ϸ����===================== 
set<info,cmp> dog;
int n,m,i;
//======================================= 

int main(){
	cin>>n>>m;                                          //����n��m  
	//�ִ��¼���� 
	for(i=1;i<=n;i++){                                  //forѭ����ѭ��n�� 
		info x;                                         //����xΪinfo 
		cin>>x.name>>x.birthday;                        //��������name��birthday ��ע��˳�� 
		dog.insert(x);                                  //����������set�� 
	} 
	//��ѯ��¼ 
	for(i=1;i<=m;i++){                                  //forѭ����ѭ��m�� 
		info y;                                         //����yΪinfo 
		cin>>y.birthday>>y.name;                        //����Ҫ��ѯ������birthday��name��ע��˳�� 
		cout<<dog.count(y)<<' ';                        //�����ѯ��� 
	}
	return 0;
} 
