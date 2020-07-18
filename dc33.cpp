#include<iostream>
using namespace std;
class A{
public:
	A(){i=100;//默认构造函数
	cout<<"类A默认构造函数"<<endl;}
	A(const A&s)//复制构造函数
	{i=s.i;
	cout<<"类A复制构造函数"<<endl;}
	int getValue();//取值
	void setValue();//设置值
private:
	int i;};
int A::getValue(){return i;}
void A::setValue(int k){i=k;}
class B:public A{
private:
	float f;
public:
	B(){f=20.1;
	cout<<"类B默认构造函数"<<endl;}
	B(const B &v):A(v)，f(v.f){
	cout<<"类B复制构造函数"<<endl;}
	float getValue();
	int getValue1(){return A::getValue();}};
float B:getValue()//重写基类函数，改变了返回值类型
{return f;}
int main(){
	A a;//调用类A默认构造函数
	B b;//调用类B默认构造函数
	B bb(b);//调用A复制构造函数、类B复制构造函数
	return 0;}
