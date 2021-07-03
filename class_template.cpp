#include<iostream>
using namespace std;

template<typename T>
class Calculator{
	T num1, num2;
public:
	Calculator(T n1, T n2)
	{
		num1=n1;
		num2=n2;
	}

	void displayResult()
	{
		cout<<"the numbers are : "<<endl;
		cout<<"sum is "<<sum()<<endl;
		cout<<"subtraction is "<<sub()<<endl;
		cout<<"multiplication is "<<mul()<<endl;
		cout<<"division is "<<div()<<endl;

	}


	T sum(){ return num1+num2;}
	T sub(){ return num1-num2;}
	T mul(){ return num1*num2;}
	T div(){ return num1+num2;}

};


int main()
{
	Calculator<int>intCal(5,4);
	Calculator<float>floatCal(5.2,8.2);

	cout<<"results of integer : "<<endl;
	intCal.displayResult();

	cout<<"results of floting-point :"<<endl;
	floatCal.displayResult();

	return 0;
}
