#include<iostream>
using namespace std;

class p{
	
	private:
		float celsius;
		
	public:
		
		void setcel()
		{
			cout<<"Enter Celsius:- ";
			cin>>celsius;	
		}
		
		float getcel()
		{
			return celsius;
		}
};

class q:public p{
	private:
		float fehrenheit;
	
	public:
	
		void setfah()
		{
			setcel();
		}
		
		float tofehrenheit()
		{
			fehrenheit=(getcel()*1.8)+32;
			return fehrenheit;
		}
};

class r:public q{
	
	private:
		float kelven;
		
	public:
		void setkel()
		{
			setfah();
		}
		
		float tokelven()
		{
			kelven=(tofehrenheit() +459.67)*5/9;
			return kelven;
		}
};

main()
{
	r obj;
	obj.setkel();
	cout<<"Celsius:-"<<obj.getcel()<<endl;
	cout<<"fehrenheit:-"<<obj.tofehrenheit()<<endl;
	cout<<"Kelvin:-"<<obj.tokelven();
}
