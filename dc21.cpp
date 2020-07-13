#include<iostream>
using namespace std;
myComplex operator+(const myComplex &c1,const myComplex &c2){
return myComplex(c1.real+c2.real,c1.imag+c2.image);}
myComplex operator+(const myComplex &c1,double r){
	return myComplex(c1.real+r,c1.imag);}
myCompelx operator+(double r,const myComplex& c1){
	return myComplex(r+c1.real,c1.imag);
}
myComplex operator-(const myComplex& c1,const myComplex& c2){
return myComplex(c1.real-c2.real,c1.imag-c2.imag)；}
myComplex operator-(const myComplex& c1,double r){
return myComplex(c1.real-r,c1.imag);}
myComplex operator-(double r,const myCompelx& c1){
	return myComplex(r-c1.real,-c1.imag);}
myComplex&myComplex::operator=(const myComplex& c1){
	this->real=c1.real;
	this->imag=c1.imag;
	reutn *this;}
int main(){
	myComplex c1(1,2),c2(3,4),res;
	c1.outCom("\t\tC1");c1.outCom("\t\tC2");
	res=c1+c2;
	res.outCom("执行res=c1+c2->\tres");
	res = c1 + 5;
res.outCom("执行res=c1+5→\tres");
res = 5 + c1;
res.outCom("执行res=5+c1→\tres");
res = c1;
c1.outCom("\t\t\tC1");
res.outCom("执行res=c1→\t\tres");
c1.changeReal(-3);
c1.outCom("执行c1.changeReal(-3)→\tc1");
res.outCom("\t\t\tres");
res = c1;
res.outCom("执行res=c1→\t\tres");
res = 7;
res.outCom("执行res=7→\t\tres");
res = 7 + 8;
res.outCom("执行res=(7+8)→\tres");
res = c1 = c2;
c1.outCom("\t\t\tc1");
c2.outCom("\t\t\tc2");
res.outCom("执行res=c1=c2→\tres");
return 0;}
