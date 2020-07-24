#include<iostream>
using namespace std;
template <int i>
class test{
public:
	int buffer[i];//使用buffer的大小可变化，但是其类型则固定为int
	int getData(int j);};
template <int i>
int test<i>::getData(int j){
	return *(buffer+j);};

int main(){
	test<6>calssInstF;
	int i;
	double fArr[6]={12.1,22.3,32.4,45.5,56.6,65.6};
	for(i=0;i<6;i++)
		classInstF.buffer[i]=fArr[i]-10;
	for(i=0;i<6;i++){
		double res=classInstF.getData(i);
		cout<<res<<endl;
	}
