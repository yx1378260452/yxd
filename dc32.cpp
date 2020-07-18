#include<iostream>
using namespace std;
class base{
	private:
		int Y;
	public:
		base(int y=0){
			Y=y;
			cout<<"base("<<y<<")"<<endl;}
	~base(){
cout<<"~base()"<<endl;}
	void print(){
cout<<Y<<"";	}
}
class Derived:public base{
private:
	int Z;
public:
	Derived(int y,int z):base(y){
		Z=z;
		cout<<"Derived("<<y<<","<<z<<")"<<endl;}
~Derived(){
	cout<<"~Derived()"<<endl;}
void print(){base::print();
	cout<<Z<<endl;}};
int main(){
	Derived d(10,20);
	d.print();
	return 0;}

