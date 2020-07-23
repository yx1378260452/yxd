#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream inFile("C:\\tmp\\test.txt",ios::in);//声明对象inFile并调用构造函数
if(inFile){
cout<<"成功打开文件：c:\\tmp\\test.txt\n";
inFile.colse();}
esle
	cout<<"打开文件失败:c:\\tmp\\test.txt\n";
oftream outFile("test.txt",ios::out);//声明对象outFile并调用构造函数
if(!outFile)
	cout<<"errorl"<<endl;
else {cout<<"成功打开文件：test1.txt\n"; outFile.close();}
fstream outFile2("tmp\\test2.txt",ios::out|ios::in);//声明对象outFile2并调用函数

if(outFile2){
	cout<<"成功打开文件：tmp\\test2.txt\n";outFile2.colse();}
else
	cout<<"error2"<<endl;
return 0;}
