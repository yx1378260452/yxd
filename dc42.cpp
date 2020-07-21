#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
virtual void print()=0; //纯虚函数
void func1()
{
cout <<"func1"<<endl;
}
};
class B:public A
{
public:
void print();
void func1()
{
cout <<"B_func1"<<endl;
}
};
B_Print
func1
void B::print()
{
cout <<"B_Print"<<endl;
}
int main()
{
//A a; //错误，抽象类不能实例化
//A *p=nwe A; //错误，不能创建类A的实例
//B b[2]; //错误，不能声明抽象类的数组
A*pa; //正确，可以声明抽象类的指针
A*pb=new B; //使用基类指针指向派生类对象
pb->print(); //调用的是类B中的函数，多态，输出B_Print
B b;
A*pc=&b;
pc->func1(); //因为不是虚函数,调用的是类A中的函数,输出func1
return 0;
}
