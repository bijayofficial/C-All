#include<iostream>
using namespace std;

class Laptop
{
public:
  Laptop()
  {
  	cout<<"Laptop class constructor"<<endl; 	// base  class constructor 
  }
};

class GamingLaptop : public Laptop
/* when GamingLaptop is called then control goes to Laptop and it will forward the control to
Laptop ... */
{
public:
	GamingLaptop()
	{
		cout<<" Gaming Laptop constructor"<<endl;  // constructor 1

	}

};

class LaptopSurvice :public GamingLaptop
/* when obj is called then control goes to LaptopSurvice and it will forward the control to
GamingLaptop ... */ 

{
public:
	LaptopSurvice()
	{
		cout<<"Laptop Survice constructor"<<endl;   // constructor 2
	}


};





int main()
{
	LaptopSurvice obj;
	return 0;
}