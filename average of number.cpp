#include<iostream>
using namespace std;
int main()
{
	int n,i;
	float num[100],sum=0.0,average;
	cout<<"enter the number of data: ";
	cin>>n;
	 
	while( n>100|| n<=0)
	{
		cout<<"error! number should in range of(1 to 100)."<<endl;
		cout<<"enter the number again: ";
		cin>>n;
    }
    for(i=0;i<n;++i)
    {
    	cout<< i+1 <<"enter a number: ";
    	cin>>num[i];
    	sum+=num[i];
	}
	average=sum/n;
	cout<<"average ="<< average;
	return 0;
}
