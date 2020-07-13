#include<iostream>
using namespace std;
class CDemo{
	private:
		int n;
	public:
		CDemo(int i=0):n(i){}
		CDemo & operator++();
		CDemo operator++(int);//用于前置形式
		operator int(){return n;}
		friend CDemo & operator--(CDemo &);
		friend CDemo operator--(CDemo &,int);};
CDemo & CDemo::operator++()//前置++
{n++;
return *this;}
CDemo CDemo::operator++(int k)//后置++,多一个参数
{CDemo tmp(*this);
	n++;
	return tmp;}
CDemo & operator--(CDemo &d)//前置--
{d.n--;
return d;}
CDemo operator--(CDemo &d,int)//后置--
{CDemo tmp(d);
d.n--;
return tmp;}
int main(){
CDemo d(10);
cout<<(d++)<<","; //等价于d.operator++（0）；输出10
cout<<d<<“,”; //输出11
cout <<(++d)<<","; //等价于d.operator++（）；输出12
cout<<d<<","; //输出12
cout<<(d--)<<“,”; //等价于operator--（d,0）；输出12
cout<<d<<“,”; //输出11
cout<<(--d)<<“,”; //等价于operator--（d）；输出10
cout<<d<<endl; //输出10
return 0;
}
