#include<iostream>
using namespace std;
void getAge(int & age){
	cout<<"enter your age: ";
	cin>>age;
}
void checkEligibility(int age){
	int votingAge=18;
	if(age>=votingAge){
		cout<<"you are eligible to vote. "<< endl;
	}else{
	int yearsLeft=votingAge-age;
	cout<<"you are not eligible to vote.years left to be eligible:"<<yearsLeft<<"year(s)."<< endl;
}
}
int main(){
	int personAge;
	getAge(personAge);
	checkEligibility(personAge);
	return 0;
}
