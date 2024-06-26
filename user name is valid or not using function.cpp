#include<iostream>
#include<string>
using namespace std;
bool isValidUsername(const std:: string& username1,const std:: string &username2){
	    return username1=username2;
}
int main()
{
    string userName,reenteredName;
	cout<<"enter the user name: ";
	cin>>userName;
	cout<<"Reenter the user name: ";
	cin>>reenteredName;
	if(isValidUsername(userName,reenteredName)){
		cout<<"user name is valid "<< endl;
	}else{
		cout<<"user name is invalid "<< endl;
	}
	return 0;
}
