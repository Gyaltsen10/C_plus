#include<isotream>
using namespace std;
int main()
{
	int n,d,r;
	cout<<"Enter numerator and denominetor:"<<endl;
	cin>>n>>d;
	r=n/d;
	try{
		if(d==0)
		{
			throw d;
		}
		r=n/d;
		cout<<"division is"<<r;
	}
	catch (int z)
	{
		cout<<"excpetion divided by zero";
	}
	return 0;
	
}
