#include<iostream>
using namespace std;
template <typename T>
void swap(T &x,T &y){
T tem=x;
x=y;
y=tem;}
class date{
public :
	mydate();
	mydate(int,int,int );
	void printDate()const;
private:
	int year,month,day;};
date::date(){
	year=1970;
	month=10;
	day=1;}
date::date(int y,int m,int d){
	year=y;
	month=m;
	day=d;}
void date::printDate()const{
cout<<year<<"\t"<<month<<"\t"<<day<<endl;
return 0;}
int main(){
	int n=1,m=2;
	swap(n,m);//编译器自动生成void swap(int &,int&)函数
	cout<<n<<"\t"<<m<<"\t"<<endl;
	double f=1.2,g=2.3;
	swap(f,g);//编译器自动生成double swap(double &,double &)函数
	cout<<f<<"\t"<<g<<"\t"<<endl;
	date d1,d2(2000,1,1);//创建两个对象
	swap(d1,d2);//编译器自动生成date swap(date &,date&)函数
	d1.printDate();
	d2.printDate();
	return 0；}

