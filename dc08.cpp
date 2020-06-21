#include<stdio.h>
int main(){
int a=20;//实际变量声明
int *p;//指针变量的声明
p=&a;//在指针变量中存储a的地址
print("Address of p:%p\n",&a);
//在指针变量中存储的地址
print("Address of p:%p\n"，p);
//使用指针访问值
print("value of *p :%d\n",*p);
return 0;
}
