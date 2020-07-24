#include<iostream>
using namespace std;
class another;//前向引用声明
class Base{
	private:
		float x;
	public:
		void print(const another &k);
};
class Derived:public Base{//派生类
	private:
		float y;};
class another//其他类
{private:
	int aaa;
public:
	another(){
		aaa=100;}
	friend void Base::print(const another &k);//基类的成员函数声明为本类的友元
}
void Base::print(const another &k){
	cout<<"Base"<<k.aaa<<endl;//可以访问私有成员变量
}
int main(){
Base a;
Derived d;
another ano;//aaa初始化为100
a.print(ano);//输出为base 100
d.print(ano);//输出为base 100
return 0;
}
