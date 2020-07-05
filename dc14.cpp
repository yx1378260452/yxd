#include<iostream>
#include<string>
using namespace std;
void f(){
int a=1;//局部自动变量a；
static int fs=1; //静态局部变量fs,完成初始化
cout<<"在f中：a(自动)="<<a<<"fs(静态)="<<fs<<" glos(静态)="<<glos<<endl;
a+=2;
fs+=2;
glos+=10;
cout<<"在f中：a(自动）="<<a<<"fs(静态）"<<fs<<"glos(静态)"<<glos<<endl<<endl;
}
int main(){
static int ms=10;
for(int i=1;i<=3;i++)f();
//cout<<"fs="<<fs<<endl;//该行错误，变量fs不可见
cout<<"ms="<<ms<<endl;
cout<<"glos="<glos<<endl;
return 0;}
