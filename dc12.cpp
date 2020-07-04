#include<iostream>
using namespace std;
class Demo{
int id;
	public :
	demo（int i)//构造函数
	{id=i;
		cout<<"id="<<id<<“构造函数”<<endl;
	}
	void printDemo();
	~Demo(){
cout<<"id="<<id<<"构造函数"<<endl;
	}
};
void Demo::printDemo(){
cout<<"id="<<id<<endl;
}
int main(){
Demo d4(4);
d4.printDemo();
d4=6;
d4.printDemo();
return 0;
}

