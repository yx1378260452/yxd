#include<iostream>
using namespace std;
int main( )
{
int a1=3; //普通变量， a1=5是正确的
const int a2=a1; //数据是常量的， a2=5是错误的
int * a3=&a1; //普通指针指向普通变量， *a3=6是正确的
const int * a4=&a1; //数据是常量的， 普通指针*a4=5是错误的
int * const a5=&a1; //指针是常量的， 不能修改指针， 但*a5=10是正确的
int const * const a6=&a1; //数据是常量的， 指针也是常量的
const int * const a7=&a1; //数据是常量的， 指针也是常量的
return 0;
}
