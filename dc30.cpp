#include<iostream>
using namespace std;
class A{
int an;
	public :
A(){}
A(int n){an=n;}
};
Class B:public A//公有派生类
{int bn;
public:
	B(int n):A(2*n){bn=n;}
};
int main(){
	Aa(10);
	Ba(20);
	a=b;//派生类对象赋值给基类对象
	return 0;}


