#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char id[11],name[21];
	int score;
	ofstream outFile;
	outFile.open("score.txt",ios::out);//以写方式打开文本文件
	if(!outFile){
		cout<<"创建文件失败"<<endl;
		return 0;}
	cout<<"请输入：学号  姓名   成绩 （以ctrl+z结束输入)\n";
	while(cin>>id>>name>>score)
		outFile<<id<<"  "<name<<"   "<<score<<endl;//向流中插入数据
	outFile.colse();
	return 0;}
