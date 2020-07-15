#include<iostream>
using namespace std;
class CB{
	public:
	int a;
	CB(int x){a=x;}
	void showa(){cout<<"Class CB--a="<<a<<end;}

}
class CD:public CB{
	public:
		int a;//与基类a同名
		CD(int x,int y):CB(x)//x用来初始化基类的成员变量a
		{a=y;}
		void showa(){
		cout<<"a="<<a<<endl;//访问派生类a
		cout<<"CB::a"<<CB::a<<endl;//访问基类a
};
int main(){
CB CBobj(12);
CBobj.showa();
CD CDobj(48,999);
CDobj.showa();//访问派生类的showa()
CDobj.CB::showa();//访问基类的showa()
cout<<"CDobj.a="<<CDobj.a<<endl;
cout<<"CDobj.CB::a="<<CDobj.CB::a<<endl;}
