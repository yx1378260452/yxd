#include<iostream>
using namespace std;
template<class T>
class base{
	T data;
public:
	void print(){
		cout<<data<<endl;}};
int main(){
	Derived d;//普通派生类的对象
	d.print();//调用类模板中的成员函数
	return 0;}

