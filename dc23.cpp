#include<iostream>
class test{
private:
	int i;
	float f;
	char ch;
public:
	test(int a=0,float b=0,char c='\0'){i=a;f=b;ch=c;}
	friend ostream &operator<<(ostream & ,test);
	friend istream &opreator>>(istream &,test &);};
ostream &operator<<(ostream & stream,test obj)
{
stream<<obj.i<<","; //stream是cout的别名
stream<<obj.f<<",";
stream<<obj.ch<<endl;
return stream;
}
istream &operator>>(istream & t_stream,test&obj)
{
t_stream>>obj.i; //t_stream是cin的别名
t_stream>>obj.f;
t_stream>>obj.ch;
return t_stream;
}
void main( )
{
test A(45,8.5,'W’);
operator<<(cout,A);
test B,C;
cout<<"Input as i f ch:";
operator>>(cin,B); operator>>(cin,C);
operator<<(cout,B); operator<<(cout,C);
}
