#include<iostream>
using namespace std;
class CTyre    //轮胎类
{
private:
    int radius;   //半径
    int width;    //宽度
public:
	CTyre():radius(16),width(185){} //构造函数
    CTyre(int r,int w):radius(r),width(w){}//构造函数
    int getRadius()
	{    
       return radius;
	}
    int getWidth()
	{
       return width;
	}
};

class CCar   //汽车类，封闭类
{
private:
    int price;   //价格
    CTyre tyre;  //成员对象
public:
    CCar();
    CCar(int p,int tr,int tw);
    int getPrice()
	{
       return price;
	}
    CTyre getCTyre()
	{
       return tyre;
	}
};

CCar::CCar()
{
    price=50010;
    CTyre();
};
CCar::CCar(int p,int tr,int tw):price(p),tyre(tr,tw){};//使用初始化列表

int main()
{
    CCar car(48900,17,225);
    cout<<"price="<<car.getPrice();
    cout<<"\t CTyre.Radius="<<car.getCTyre().getRadius()
        <<"\t CTyre.Width="<<car.getCTyre().getWidth()<<endl;
    CCar car1;
    cout<<"price="<<car1.getPrice();
    cout<<"\t CTyre.Radius="<<car1.getCTyre().getRadius()
        <<"\t CTyre.width="<<car1.getCTyre().getWidth()<<endl;
    return 0;
}
