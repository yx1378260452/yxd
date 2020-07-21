#include<iostream>
using namespace std;
class base{//基类
voi func1()//不是虚函数
{cout<<"base::func1()"<<endl;
func2();//在成员函数中调用虚函数
func3();}
virtual void fun2()//虚函数
{cout<<"base::fun2()"<<endl;
}
void fun3(){
	cout<<"Base::fun3()"<<endl;}
};
class derived:public base{//派生类
	public:
		virtual void fun2(){//虚函数
		cout<<"derived:func2()"<<endl;}
		void fun3(){
		cout<<"derived:fun3()"<<endl;}};
int main(){
	derived d;
	d.fun1();//调用基类中的成员函数
	return 0;}
