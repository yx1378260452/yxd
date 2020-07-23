#include<iostream>
#include<fstream>
using namespace std;
int main(){
char id[11],name[21];
int score;
ifsream inFile;
inFile.open("score.txt",ios::in);//以读方式打开文本文件
if(!inFile){
	cout<<"打开文件失败"<<endl;
return 0;}
cout<<"学号   姓名  \t\t\t成绩\n"；
while(inFile>>id>>name>>score)//读入文件
	cout<<left<<setw(10)<<id<<"  "<<setw(20)<<name<<"  "<<setw(30)<<right<<score<<endl;//屏幕显示
inFile.colse();
return 0;}
