/*costructor is a particular data type which is used to group a couple of objectes for various time. 
if the valaueis not given here then by default it takes garbage value. 
and inside a constructor the passing value will be printed for that iteration.*/

#include<iostream>
#include<string>

using namespace std;

//FIRST STEP:


/*
class laptop
{
public:
	string name;
	float price;
	laptop()//constructor have to have the name of class.
//the value can also be passed as laptop(objname= " Mac", objprice = 100.00)

	{
		// strcpy(name," Mac");//string copy
		name=" Mac";
		price=100.00;
		cout<<"Name : "<<name<<endl<<" Price : "<<price<<endl;
	}
};
int main()
{
	laptop obj;// here the (.) operator is not given
	return 0;
}
*/

//SECOND STEP:


class laptop
{
public:
	string name;
	float price;
	laptop()
	{
		//here the garbage val will print.
		cout<<" Name : "<<name<<endl<<"Price : "<<price<<endl;
	}	
	laptop(string objname, float objprice)
	{
		name=objname;
		price=objprice;
		cout<<" Name : "<<name<<endl<<"Price : "<<price<<endl;
	}
};
int main()
{
	laptop obj;// here the (.) operator is not given
	laptop m(" Mac",100.00);
	return 0;
}