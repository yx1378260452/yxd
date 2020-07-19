#include<iostream>
using namespace std;
const double PI=3.14159;
{
pritvate:
	double x,y;
public:
	point(double i,double j){x=i;y=j;}
	virtual double area(){return 0;}
};
class circle:public point{
private:
	double radius;
public:
	circle(double a,double b,double r):point(a,b){radius=r;}
	double area(){return PI*radius*radius;}
};
void display(point *p){cout<<p->area()<<endl;}
void display(point&a){cout<<a.area()<<endl;}
void main(){
point a(1.5,5.3);
circle c(1.5.5.3,2.5);
point *p=&c//派生类对象的地址赋给基类指针
point &rc=&c;//派生类对象初始化基类引用
display(a);//基类对象调用基类虚函数area,输出0
display(p);//指针调用派生类虚函数area,
displya(c);//指针调用派生类虚函数area,
}
 
