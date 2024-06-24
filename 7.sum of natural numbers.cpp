#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter a number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"the sum of n natural numbers is:" <<  sum <<endl;
	return 0;
}
