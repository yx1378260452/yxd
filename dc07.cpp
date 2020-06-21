#include<iostream>
using namespace std;
int sum(int x,int y){
int sum=x+y;
return sum;
}
float sum(float x,float y){
float sum=x+y;
return sum;
}
double sum(double x,double y){
double sum=x+y;
return sum;
}
void main(){
int a=10,b=20;
cout<<"a="<<a<<",b="<<b<<endl<<endl;
cout<<sum(a,b)<<endl;
}
