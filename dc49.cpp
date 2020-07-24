#include<iostream>
using namespace std;
template <typename T>
T abs( T x){
return x<0?-x:x;}
int main(){
int n=-5;
int m=10;
double d=-.5;
float f=3.2;
cout<<n<<"的绝对值是："<<abs(n)<endl;
cout<<m<<"的绝对值是："<<abs(m)<<endl;
cout<<f<<"的绝对值是："<<abs(f)<<endl;
cout<<d<<"的绝对值是："<<abs(d)<<endl;
return 0;}



