#include<iostream>
using namespace std;
template <typename t>
t sort  ( t n)
{
	t a[50];
	t i=0,j=0,temp=0;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}

cout<<"Ascending order of entered numbers are:";
for(i=0;i<=n;i++)
{
cout<<a[i]<<endl;
}
}
int main()
{
	int n,result;
	cout<<"Enter how many numbers you want to sort"<<endl;
	cin>>n;
	sort<int>(n);
	return 0;
}



