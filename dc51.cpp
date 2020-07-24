#include<iostream>
using namespace std;
template <class T>
class test{
	public:
	T buffer[10];
	T getData(int j);};
template <class T>
T test<T>::getData(int j){
	return *(buffer+j);};
int main(){
Test<char>classInstA;//char 取代T,从而实例化为一个具体的类
int i;
char cArr[6]="abcde";
for(i=0;i<5;i++)
	classInstA.buffer[i]=cArr[i];
for(i=0;i<t;i++){
char res=classInstA(i);
cout<<res<<"";}
cout<<endl;
test<double>classInstF;
double fArr[6]={12.1,23.2,34.3,45.4,56.5,63.4};
for(i=0;i<6;i++){
	classInstF.buffer[i]=fArr[i]-10;
for(i=0;i<6;i++){
	double res=classInstF.getData(i);
	ccout<<res<<"";}
cout<<endl;
return 0;}
