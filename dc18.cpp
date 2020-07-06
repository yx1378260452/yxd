#include<iostream>
#include<cmath>
using namespace std;

class Pixel;    //前向引用声明
class Test
{
public:
	void printX(Pixel p); //用到了类Pixel
};
class Pixel
{
private:
    int x,y;
public:
    Pixel(int x0, int y0)
	{   
		x=x0;
        y=y0;
	}
	void printxy()
	{   cout<<"pixel:("<<x<<","<<y<<")"<<endl;
	}
	friend double getDist(Pixel p1,Pixel p2); //友元函数（原型），全局函数
	friend void Test::printX(Pixel p);    //类Test的成员函数为本类的友元函数
};
void Test::printX(Pixel p)
{   cout<<"x="<<p.x<<"\ty="<<p.y<<endl;  //访问类的Pixel的私有成员
    return;
}
double getDist(Pixel p1,Pixel p2)  //友元函数在类体外定义
{
	double xd=double(p1.x-p2.x);    //使用类Pixel的私有成员x
	double yd=double(p1.y-p2.y);   //使用类Pixel的私有成员y
    return sqrt(xd*xd+yd*yd);//两点间距离
}

int main()
{
	Pixel p1(0,0),p2(10,10);
	p1.printxy();
	p2.printxy();
	cout<<"(p1,p2)间距离="<<getDist(p1,p2)<<endl; //直接调用全局函数
	Test t;
	cout<<"从友元函数中输出--"<<endl;
	t.printX(p1); //通过对象调用类的成员函数
    t.printX(p2);//通过对象调用类的成员函数
    return 0;
}
