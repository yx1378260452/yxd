#include<iostream>
using namespace std;
class A{//基类
virtual void hello(){
cout<<"A::hello"<<endl;}
virtual void bye()//虚函数
cout<<"A::bye"<<endl;};
class B:public A{//派生类
	public:
		virtual void hell(){//虚函数
cout<<"B::hello"<<endl;}
		B(){
		hello();}//调用虚函数，但不是多态
		~B(){
		bye();//调用虚函数，但不是多态
		}};
class c:public b{
	public :
		virtual void hell(){
		cout<<"c::hell"<<endl;}};
int main(){
	c obj;
	return 0;}

