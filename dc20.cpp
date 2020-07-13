#include<iostream>
#include<string>
using namespace std;
class myComplex //复数类
{private:
double real,imag;
	public:
myComplex();
myComplex(double r,double i);
void outCom();
myComplex operator-(const myComplex &c);//成员函数
friend myComplex operator+(const myComplex &c1,const myComplex &c2);
};
myComplex::myComplex(){
real=0;
imag=0;
}
myComplex::myComplex(double r,double i){
real=r;
imag=i;}
void myComplex::outCom(){
cout<<"("<<real<<","<<imag<<")";
}
myComplex myComplex::operator-(const myComplex &c){
return myComplex(this->real-c.real,this->imag-c.imag);
}
myComplex operator+(const myComplex &c1,const myComplex &c2){
return myComplex(c1.real+c2.real,c1.image+c2.image);}
int main(){
myComplex c1(1,2),c2(3,4),res;
c1.outCom();
cout<<"operator+";
c2.outCom();
cout<<"=";
res=c1+c2;
res.coutCom();
cout<<endl;
c1.coutCom();
cout<<"operator-";
c2.coutcom();
cout<<"=";
res=c1-c2;
res.outCom();
cout<<endl;
return 0;
}



