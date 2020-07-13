#include<iostream>
using namespace std;
class myComplex{//复数类
private:
	double real,image;
public :
	myComplex();//构造函数
	myComplex(double r,double i)//构造函数
	void outCom();
	friend myComplex operator+(const myComplex &c1,const myComplex &c2);
	friend myComplex operator-(const myComplex &c1,const myComplex &c2);
	friend myComplex operator-(const myComplex &c1,double r);
	friend myCOmplex operator-(double r,const myComplex &c1);};
myComplex::myComplex(){
real=0;
image=0;
}
myComplex::myComplex(double r,double i){
real=r;
image=i;
}
void myComplex::outCom(){
	cout<<"("<<real<<","<<image<<")";}
myComplex operator+(const myComplex &c1,const myComplex &c2)//c1+c2
{return myComplex(c1,real+c2.real,c1.image+c2.imge);}//返回一个临时对象
myComplex operator-(const myComplex &c1,const myComplex &C2)//c1-c2
{return myComplex(c1.real-c2.real,c1.image-c2.image);}//返回一个临时对象
myComplex operator-(const myComplex &c1,double r)//c1-r新增
{return myComplex(c1.real-r,ci.image};//返回一个临时对象
myComplex operator-(double r,const myComplex &c1)//r-c1新增
{return myComplex(r-c1.real,-c1.image);}
int main(){
myComplex c1(1,2),c2(3,4),res;
c1.outCom();
cout<<"operator+";
c2.outCom();
cout<<"=";
res=c1+c2;
res.outCom();
cout<<endl;
res=c1-5;
res.outCom();
res=5-c1;
res.outCom();
return 0;
}
