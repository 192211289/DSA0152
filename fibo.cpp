#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=1,nextterm=0;
	cout<<"enter the number: ";
	cin>>n;
	cout<<"fibonacci series: "<< t1 << "," << t2<<",";
    nextterm=t1	+t2;
    while(nextterm<=n){
    	t1=t2;
    	t2=nextterm;
    	nextterm=t1+t2;
	}
	return 0;
}
