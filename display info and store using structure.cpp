#include<iostream>
using namespace std;
struct student
{
	char name[50];
	int roll;
	float marks;
}s[10];
int main()
{
	cout<<"enter information of students: "<< endl;
	for(int i=0;i<10;++i)
	{
		s[i].roll=i+1;
		cout<<"for roll number "<<s[i].roll<<","<<endl;
		
		cout<<"enter name: ";
		cin>>s[i].name;
	}
	cout<<"displaying information: "<<endl;
	for(int i=0;i<10;++i)
	{
		cout<<"\nroll number :"<<i+1 << endl;
		cout<< "name: "<< s[i].name << endl;
		cout<< "marks :" <<s[i].marks<< endl;
	}
	return 0;
}
