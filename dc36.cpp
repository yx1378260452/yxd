#include<iostream>
using namespace std;
class A{
	public:
virtual void print()//虚函数
{cout<<"A:print"<<endl;}
};
class B:public A{//派生类B，公有继承
	public:
	virtual void print()//虚函数
{cout<<"B:print"<<endl;}};
class D:public A{//派生类D，公有继承
	public:
	virtual void print(){//公有继承
cout<<"D:print"<<endl;}};
class E:public B{//公有类
public:
	virtual void print(){
	cout<<"E:print"<<endl;}};
int main(){
A a;B b;D d;E e;
A*pa=&a;//基类pa指指针向基类对象a
B*pb=&b;//派生类指针pa指向派生类对象b
pa->print();//多态，目前指向基类对象，调用a.print(),输出a：print
pa=pb;//派生类指针赋给基类指针，pa指向派生类对象b
pa->print();//多态，目前指向派生对象，调用b.print(),输出B:print
pa=&pd;//基类指针pa指向基类对象d
pa->print();//多态，目前指向派生类对象，调用d.print()输出D:print
pa=&e;//基类指针pa指向基类对象e
pa->print();//多态，目前指向派生类对象，调用e.print()输出E:print
return 0;}



