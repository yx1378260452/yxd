#include <iostream>
using namespace std;
class classA
{
public:
    double x,y;
	static int num;    //公有静态成员变量—供所有对象“共享”
	                   //用于记录通过构造函数已生成的对象个数

	classA()
	{     x=0;
	      y=0; 
		  num++;        //每生成一个对象，num加1
	}

	classA(double x0,double y0)
	{     x=x0;
	      y=y0;
		  num++;
	}
	static void staticFun()    //静态成员函数，输出静态成员变量num的当前值
	{   
		cout<<"current_num="<<num<<endl;
		//cout<<"x="<<x<<endl;   //错误，在静态函数中不能访问非静态变量
	}
};

int classA::num=0;  //必须在类体外（使用类名限定）初始化静态成员变量
int main()
{
	classA obj(1.2,3.4),*p;                     //调用1次构造函数
    cout<<"classA::num="<<classA::num<<endl;   //使用类名做限定符
    classA::staticFun();
    cout<<"obj.num="<<obj.num<<endl;         //使用对象名做限定符
    obj.staticFun();
    cout<<endl;
    classA A[3];                           //调用3次构造函数
    cout<<"classA::num="<<classA::num<<endl;
    classA::staticFun();
    cout<<endl;
    p=new classA(5.6,7.8);                //调用1次构造函数
    cout<<"classA::num="<<classA::num<<endl;
    classA::staticFun();
    cout<<"p_>num="<<p->num<<endl;
    p->staticFun();
    return 0;
}


