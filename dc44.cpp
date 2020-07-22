#include<iostream>
using namespace std;
int main(){
double values[]={1.23,20.2345,300.235,400.235,234.23,2335.53323};
cout.fill('*');
for(int i=0;i<sizeof(values)/sizeof(double);i++){
cout<<"values"["<<i<<"]=(";
		cout.width(10);
		cout<<values[i[<<")<<endl;}
cout.fill('');
int j;
for(j=0;j<sizeof(values)/sizeof(double);j++){
	cout<<"values["<<j<<"]=(";
	cout.width(10);
	cout.presision(j+3);
	cout<<values[j]<<"("<<endl;}return 0;}
