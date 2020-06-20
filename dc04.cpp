#include<iostream>
using namespace std;
int main(){
int onelnt=1;
int &ref=onelnt;//ref是onelnt的引用，ref等价于onelnt
const int &refc=onelnt;//定义常引用
ref=2;
cout<<"onelnt="<<onelnt<<","<<"ref="<<ref<<endl;//输出onelnt=2,ref=2
cout<<"refc="<<refc<<endl;//输出refc=2
onelnt=3;
cout<<"ref="<<ref<<endl;
cout<<"refc="<<refc<<endl;
int & ref2=ref;
cout<<"ref2"<<ref2<<endl;
return 0;
}
