#include<iostream>
using namespace std;
int main(){
int n=0;
char ch;
while((ch=cin.get()!=EOF)//当文件没有结束时继续进行循环
{cout.put(ch);
n++;}
cout<<"输入字符共计:"<<n<<endl;
return 0;}`
