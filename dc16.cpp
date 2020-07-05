#include<iostream>
#include<string>
using namespace std;
class A{
int i,j;
	public: static int x,y;//定义静态成员
	public :A(int a=0,int b=0,int c=0,int d=0){i=a;j=b;x=c;y=d;}
		void show(){
cout<<"i="<<i<<"\tj="<<j<<"\t"<<endl;
cout<<"x="<<x<<"\ty="<<y<<"\t"<<endl;		}
};
int A::x=1000;
int A::y=1000;
void main(){
cout<<"A::x="<<A::x<<"\tA::y="<<A::y<<endl;
A a(2,3,4,5);
a.show();
A b(100,200,300,400);
b.show();
a.show();
cout<<"A::x="<<A::x<<"\t A::y="<<A::y<<endl;
}
