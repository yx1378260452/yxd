#include<iostream>
using namespace std;
class base{
	private:
		float x;
	public:
		static int stav;
		Base(){
			stav++;}
};
int Base::stav=0;
class Derived:public base{//派生类
private:
	float y;
public:
	Derived(){
		stav++;}};
int main(){
	base a;
	cout<<a.stav<<endl;
	Derived d;
	cout<<d.stav<<endl;
	return 0;}
