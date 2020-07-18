#include<iostream>
using namespace std;
class base{
	protected:
		int n;
	public:
		CBase(int i):n(i){}
		void print()
		{cout<<"CBase:n="<<n<<endl;}};
class CDerived : public base{
	public :
	int v;
	CDerived(int i):CBase(i),v(2*i){}
	void Func(){}
	void print(){
Cout<<"CDerived:n="<<n<<endl;
cout<<"CDerived:v="<<v<<endl;
	}
};
int main(){
CDerived objDerived(3);
base objbase(5);
base *pbase=&objDerived;//使用基类指针指向派生类对象
CDerived *pDerived;
pDerived=&objDerived;
cout<<"使用派生类指针调用函数"<<endl;
pDerived->print();//调用的是派生类中的函数
pbase=pDerived;//基类指针=派生类指针
cout<<"使用基类指针调用函数"<<endl;
pbase->print();
//pbase->Func();//错误，派生类指针=基类指针
//pDerived=pbase;//强制类型转换，派生类指针=基类指针
pDerived=(CDerived*)pbase;
cout<<"使用派生类指针调用函数"<<endl;
pDerived->print();//调用的是派生类中的函数
return 0;
}


