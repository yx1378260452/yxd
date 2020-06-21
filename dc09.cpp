#include<iostream>
using namespace std;
int main(){
string str;//声明string对象str，值为空
string year="一九四九";//声明string对象为年份,并使用字符串常量进行初始化
string str2="新中国成立!";
cout<<"year="<<year<<endl;
cout<<"str2="<<<str2<<endl;
//还可以使用字符数组对string 进行初始化，
char name[]="人民从此当家做主！";
string s1=name;
cout<<"name="<<name<<endl;
//还可以声明一个string 对象数组，即数字中每个元素都是字符串
string year[]={"一九四九","新中国成立!","人民从此当家做主！"};
cout<<year[1]<<endl;//输出新中国成立！,数组下标为1
cout<<sizeof(year)/sizeof(string)<<endl;//输出数组元素个数
return 0;
}
