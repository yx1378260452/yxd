#include<iostream>
using namespace std;
calss Base{
	protected:
		int v1,v2;
	public:
		Base();
	 	Base(int,int);
		~Base();}；
Base::Base(){
cout<<"Base无参构造函数"<<endl;}
Base::Base(int m,int n){
v1=m;
v2=n;
cout<<"Base  2个参数构造函数"<<endl;
}
Base::~Base(){
cout<<"Base析构函数"<<endl;}
class Derived:public Base{//公有继承的派生类
int v3;
Derived();
Derived(int);
Derived(int,int,int);
~Derived();}
Derived::Derived(){
cout<<"Derived无参构造函数"<<endl;
}
Derived::Derived(int):v3(k){
cout<<"Derived带1个参数构造函数"<<endl;
}
Derived::Derived(int a,int b,int c):base(a,b),v3(c){
cout<<"Derived带3个参数构造函数"<<endl;
}
Derived::~Derived(){
cout<<"Derived析构函数"<<endl;}
int main(){
cout<<"无参对象的创建"<<endl;
base baecla;//创建基类对象
Derived derivecla;//派生类对象
return 0;}
