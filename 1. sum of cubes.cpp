
using namespace std;
class x{
	
	public:  
	
	int a,b,c;
	
	void setter()
	{
		cout<<"Enter Value A:-";
		cin>>a;
		cout<<"Enter Value B:-";
		cin>>b;
		cout<<"Enter Value C:-";
		cin>>c;
		cout<<endl<<endl;
	}
	
};

class y:public x{
	
	public:

	int a_cube;
	int b_cube;
	int c_cube;
	int sum;

	void datacube()
	{
	
	a_cube=a*a*a;
	b_cube=b*b*b;
	c_cube=c*c*c;
		cout<<"Cube Of A ="<<a_cube<<endl;
		cout<<"Cube Of B ="<<b_cube<<endl;
		cout<<"Cube Of C ="<<c_cube<<endl;
	}	
	
	void datasum()
	{
		sum=a_cube+b_cube+c_cube;
		
		cout<<"Sum ="<<sum;	
	}	
};

main()
{
	y obj;
	
	obj.setter();
	obj.datacube();
	obj.datasum();

	
}
