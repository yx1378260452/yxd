#include<iostream>//标准输入输出
using namespace std;
void func(int a=11,int b=22,int c=33)//参数a,b,c分别设置了默认值11,22,33
{cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;
}
int main(){
func();
func(55);
func(77,99);
func(8,88,888);
return 0;
}




