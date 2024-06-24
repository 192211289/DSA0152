#include<iostream>
using namespace std;
float calculateInterestSenior(float principal,float rate,float time){
return (principal*rate*time);
}
float calculateInterest(float principal,float time){
	float rate=10.0;
	return (principal*rate*time)/100;
}
int main()
{
	float principal,time,interest;
	cout<<"enter principal amount: ";
	cin>>principal;
	cout<<"enter the time: ";
	cin>>time;
	cout<<"enter the interest: ";
	cin>>interest;
	char customerType;
	cout<<"are you a senior citizen?(N/Y)";
	cin>>customerType;
	if(customerType == 'Y' || customerType =='y'){
		interest=calculateInterestSenior(principal,12.0,time);
		}else{
			interest=calculateInterest(principal,time);
		}
		cout<<"simple interest :" << interest << endl;
		return 0;
	
}
