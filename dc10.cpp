#include<iostream>
#include<string>
using namespace std;
void main(){
string s1,s2;
s1="四是四";
s2=s1;
string s3;
cout<<"s3="<<s3<<endl;
s3=s1+s2;
cout<<"s3="<<s3<<endl;
s3+="demo";
cout<<"s3="<<s3<<endl;
bool b=s1<s3;
cout<<"bool="<<b<<endl;
char c=s1[2];
cout<<"c="<<c<<endl;
cout<<s1[2]<<endl;
char arrstr[]="十四是十四";
s3=s1+arrstr;
cout<<s3<<endl;
return 0;

}
