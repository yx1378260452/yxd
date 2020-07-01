#include<iostream>
#include<string>
using namespace std;
class myDate{
	public:
		myDate();//构造函数
		myDate(int,int,int);//构造函数
		void setDate(int,int,int);//设置函数
		void setDate(myDate);//设置函数
		myDate getDate();//获取日期
		void setYear(int);//设置年
		int getMonth();//获取月
		void printDate() const;//打印日期
	private:
		int year,month,day;//成员变量，表示年、月、日
};
//在类体外定义成员函数
myDate::myDate(){ //定义一个无参函数，默认为1970.1.1
year=1970,month=1,day=1;
}
myDate::myDate(int y,int m,int d){
year=y;
month=m;
day=d;
}
void myDate::setDate(int y,int m,int d){
year=y;
month=m;
day=d;
return;
}
void myDate::setDate(myDate oneD){
year=oneD.year;
month=oneD.month;
day=oneD.day;
return;
}
myDate myDate::getDate(){
return *this;
}
void myDate::setYear(int y){
year=y;
return;
}
int myDate::getMonth(){
return month;
}

void myDate::printDate()const{
cout<<year<<"/"<<month<<"/"<<day;
	return;
}
class student{
	public :
		void setStudent(string,myDate);//设置学生信息
		void setName(string);//设置姓名
		string getName();//获取姓名

		void setBirthday(myDate)//设置生日
		myDate getBrithday(myDate)//获取生日
		void printStudent(）const;//打印信息
	private:
	        string name;
		myDate birthday;
	

};
//类体外定义成员函数
void student::setStudent(string s,myDate d){
name=s;
birthday.setDate(d);
return;
}
void student::setName(string n){
name=n;
return;}
void student::getName(){
return name;}

void student::setBirthday(myDate d){
birthday.setDate(d);
return ;}
myDate student::getBirthday(){
return birthday;
}
void student::printStudent()const{
cout<<"姓名："<<name<<"\t生日:"；
	birthday.printDate();//调用myDate的成员函数
cout<<endl;
}
int main(){
student ss;
int y,m,d;
string name;
cout<<"请输入学生的姓名和生日,生日以\年月日\的次序输入";
ss.setStuent(name_,myDate(y,m,d);
ss.printStudent();
return 0;
}
