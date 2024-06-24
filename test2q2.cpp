#include<iostream>
using namespace std;
class KL{
	public:
		int n;
		int digit;
		
		void rev(int n){
			int rev=0;
		while(n!=0){
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	cout<<rev;
	}
	
};

int main(){
	int n=187;
	KL r;
	r.rev(n);
}
