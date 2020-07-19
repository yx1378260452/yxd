#include<iostream>
using namespace std;
class A//基类
{public :
virtual:void pirnt(){
	cout<<"A::print"<<endl;
	}};
class B:public A{
public :
virtual: void print(){//虚函数
cout<<"B::print"<<endl;}};
void printinfo(A &r){
	r.print();//多态，使用基类引用调用那个print()取决于r引用了那个类的对象
}
int main(){
A a; B b;
printinfo(a);//使用基类对象，调用基类中的函数，输出A：：print
printinfo(b);//使用基类对象，调用基类中的函数，输出B::print
return 0;}
