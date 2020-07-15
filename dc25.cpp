#include<iostream>
using namespace std;
class baseClass{//基类
int v1,v2;
char v4;
	public :
int templ(){};
};
class Derived:public baseClass{//派生类
int v3;
int *p;
	public :
int temp(){};
}
int main(){
cout<<"base="<<sizeof(baseClass)<<endl;//输出base=12
cout<<"Drived="<<sizeof(Derived)<<endl;//输出Drived=20
return 0;
}
